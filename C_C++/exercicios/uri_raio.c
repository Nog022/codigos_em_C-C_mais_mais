/*area = n * raio**2*/
#include <stdio.h>

int main(){

    double raio,resultado,n;
    n = 3.14159;
    /*entrada*/
    scanf("%lf",&raio);
    /*calculo*/
    resultado = n * (raio * raio);
    /*sainda*/
    printf("A=%.4lf\n",resultado); 

    return 0;
}