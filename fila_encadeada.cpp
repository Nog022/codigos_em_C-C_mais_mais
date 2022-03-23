#include <stdio.h>
#include <stdlib.h>

class NoFila1{
public:
    char dado;
    NoFila1* prox;

};

class FilaEnc1{
public:
    NoFila1* inicio;
    NoFila1* fim;
    int n;

        void cria(){
        this -> n = 0;
        this -> inicio = 0;
        this -> fim = 0;
    }

    void libera(){
        while(this -> n > 0){
            desenfileira();
        }
    }


    void enfileira(char v){
        NoFila1* no = new NoFila1;
        no -> dado = v;
        no -> prox = 0;   //{. dado = v, .prox = 0};
        if(n ==0){
            inicio = fim = no;
        
        }else{
            fim -> prox = no;
            fim = no;
        }
        n++;
    }

    char desenfileira(){
        NoFila1* p = inicio;
        inicio = inicio -> prox;
        char r = p -> dado;
        delete p;
        n--;
        return r;
    }

};

int main(){
    FilaEnc1 p;
    p.cria();
    p.enfileira('A');
    p.enfileira('B');
    p.enfileira('C');

    printf("%c\n",p.desenfileira());
    //p.desenfileira('D');

    while(p.n > 0){
        printf("%c\n",p.desenfileira());
    }
    p.libera();

    return 0;
}




