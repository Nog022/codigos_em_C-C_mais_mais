#include <stdio.h>

constexpr int MAXN = 1000;

class Pilha1{
public:
    int elementos[MAXN];
    int n;

    void cria(){
        this -> n = 0;
    }

    void libera(){
        
    }

    void empilha(int dado){
        this -> elementos[n] = dado;
        this -> n++;
    }

    int desempilha(){
        this -> n--;
        return elementos[n];
    }


    int topo(){
        return this -> elementos[n - 1];
    }
};

int main(){
    Pilha1 p;
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