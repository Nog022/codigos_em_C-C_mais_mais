#include <stdio.h>

constexpr int MAXN = 100;

class FilaSeq2{
public:
    char elementos[MAXN];
    int n;
    int inicio;
    int fim;

    void cria(){
        this -> n = 0;
        this -> inicio = 0;
        this -> fim = 0;
    }

    void libera(){

    }

    char frente(){
        return this -> elementos[inicio];
    }

    void enfileira(char dado){
        this -> elementos[fim] = dado;
        this -> fim++;
        this -> n++;


    }

    char desenfileira(){
        char r = this -> elementos[inicio]; //primeiro sempre 'frente'
        inicio++;
        n--;
        return r;
    }

};

int main(){
    FilaSeq2 p;
    p.cria();
    p.enfileira('A');
    p.enfileira('B');
    p.enfileira('C');

    printf("%c\n",p.frente());
    printf("%c\n",p.desenfileira());
    //p.desenfileira('D');

    while(p.n > 0){
        printf("%c\n",p.desenfileira());
    }
    p.libera();

    return 0;
}

/*
class FilaSeq1{
public:
    char elementos[MAXN];
    int n;

    void cria(){
        this -> n = 0;
    }

    void libera(){

    }

    char frente(){
        return this -> elementos[0];
    }

    void enfileira(char dado){
        this -> elementos[n] = dado;
        this -> n++;


    }

    char desenfileira(){
        char r = this -> elementos[0]; //primeiro sempre 'frente'
        for(int i = 0; i < n-1; i++){
            this -> elementos[i] = this -> elementos[i+1];
        }
        this -> n--;
        return r;
    }

};

int main(){
    FilaSeq1 p;
    p.cria();
    p.enfileira('A');
    p.enfileira('B');
    p.enfileira('C');

    printf("%c\n",p.frente());
    printf("%c\n",p.desenfileira());
    //p.desenfileira('D');

    while(p.n > 0){
        printf("%c\n",p.desenfileira());
    }
    p.libera();

    return 0;
}

*/