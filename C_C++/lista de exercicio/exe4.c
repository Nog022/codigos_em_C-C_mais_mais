#include <stdio.h>

int main (){

    double F;

    printf("Digite um valor em Faherenheit: ");
    scanf("%f",&F);

    /*A) C=(f-32.0) * (5.0/9.0)*/

    int celsius = (F - 32.0) * (5.0 / 9.0);

    printf("A) Em celsius fica %f", celsius);



}