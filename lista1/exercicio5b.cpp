#include <iostream>
#include <new>

class FilaNo1{
public:
    int dado;
    FilaNo1* prox;
};

class FilaEnc1{
public:
    FilaNo1* inicio;
    FilaNo1* fim;
    int n;

    void cria(){
        this -> n = 0;
        this -> inicio = 0;
        this -> fim = 0;
    }

    void libera(){
        while(this -> n > n){
            FilaNo1* p =this -> inicio;
        }
    }

    char frente(){
        return this -> inicio -> dado;
    }

    void enfileira(char x){
        FilaNo1* no = new FilaNo1;
        no -> dado = x;
        no -> prox = 0;
        if(n == 0){
            inicio = fim = no;
        }else{
            fim -> prox = no;
            fim = no;
        }
        this -> n++;
    }

    char desenfileira(){
        FilaNo1* p = this -> inicio;
        inicio = inicio -> prox;
        char r = p -> dado;
        delete p;
        this -> n--;
        return r;
    }

};

int main(){

    FilaEnc1 f1;
    FilaEnc1 f2;
    FilaEnc1 f3;

    f1.cria();
    f2.cria();
    f3.cria();

    f1.enfileira('A');
    f2.enfileira('B');
    f3.enfileira('C');

    int tamamnho = f1.n;

    int aux = 1;

    f2.enfileira(f1.frente());
    f1.desenfileira();
    f3.enfileira(f1.frente());
    f1.desenfileira();
    f3.enfileira(f2.frente());
    f2.desenfileira();
    
    int i = 0;
    int j = 0;
    int y = 0;

    while(i < tamamnho - 2){
        if(f2.n > f3.n){
            f3.enfileira(f1.frente());
            f1.desenfileira();

            while(j <= aux){
                f3.enfileira(f2.frente());
                f2.desenfileira();
                
                j++;
            }
                aux++;
        }
        else{
            f2.enfileira(f1.frente());
            f1.desenfileira();

            while(y <= aux){
                f2.enfileira(f3.frente());
                f3.desenfileira();

                y++;
            }
            aux++;
        }

        i++;
    }

    if(f2.n > f3.n){
        for(int i = 0; i < tamamnho; i++){
            f1.enfileira(f2.frente());
            f2.desenfileira();
        }
    }
    else{
        for(int i = 0; i < tamamnho; i++){
            f1.enfileira(f3.frente());
            f3.desenfileira();
        }
    }

    f1.libera();
    f2.libera();
    f3.libera();

    return 0;
}