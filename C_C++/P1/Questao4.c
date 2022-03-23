#include <stdio.h>;

// AQUI ENTRA O SEU CÓDIGO PARA A FUNÇÃO troca

int troca(int *a, int *b){
    int controle;
    controle = *a;
    *a = *b;
    *b = controle;

}

int main(){

int a = 1, b = 2;

printf("a,b: %d,%d\n", a, b);

troca(&a, &b);

printf("a,b: %d,%d\n", a, b);

}