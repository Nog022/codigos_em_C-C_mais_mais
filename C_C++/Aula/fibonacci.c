#include <stdio.h>

int fib(int n, int n_esimo){
    if (n < 2){
        return n;
    }
    else{
        n_esimo =  (n - 1) + (n - 2);
        return n_esimo;
    }
}


int main(){

    int n,resultado,n_esimo;

    printf("\nDigite um valor para n: ");
    scanf("%d",&n);
    resultado = fib(n, n_esimo);
    printf("\nO resultado de %d é %d",n,resultado);
}