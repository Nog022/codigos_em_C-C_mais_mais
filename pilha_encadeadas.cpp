#include <iostream>
#include <new>

class NoPilha1{
public:
    int dado;
    NoPilha1 * prox;

};

class PilhaEnc1{
public: 
    NoPilha1* inicio;
    int n;

    void cria(){
        this -> n = 0;  // zero elementos na pilha
        this -> inicio = 0; //endereço zero da memoria
    }

    void libera(){
        while(this -> n > 0){
            NoPilha1* p = this -> inicio -> prox;
            delete this -> inicio;
            this -> inicio = p;
            this -> n--;
        }
    }

    void empilha(int v){
        NoPilha1* no  = new NoPilha1;
        no -> dado = v;
        no -> prox = this -> inicio;                    
        this -> inicio = no;
        this -> n++;

    }

    int desempilha(){
        NoPilha1* p = this -> inicio -> prox;
        char r = this -> inicio -> dado;
        delete this -> inicio;
        this -> inicio = p;
        this -> n--;
        return r;
    }

    int topo(){
        //return this ->    elementos[n - 1];
    }

};

int main(){

    PilhaEnc1 p;
    p.cria();
    p.empilha(1);
    p.empilha(2);
    p.empilha(3);

    printf("Desempilhando\n");

    printf("%d\n", p.topo());
    printf("%d\n", p.desempilha());
    p.empilha(4);

    

    while(p.n > 0){
        printf("%d\n", p.desempilha());
    }
    p.libera();

    return 0;
}