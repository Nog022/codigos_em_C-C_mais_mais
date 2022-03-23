#include <stdio.h>

int fat(int n){
    if(n)
        return n*fat(n-1);
        else return 1;
}

int main (){

    int n,resultado;
    printf("\n\nDigite um valor para n: ");
    scanf("%d", &n);
    resultado = fat(n);

    printf("\nO fatorial de %d e %d",n, &resultado);




}