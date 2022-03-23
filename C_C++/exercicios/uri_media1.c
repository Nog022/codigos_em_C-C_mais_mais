#include <stdio.h>

int main(){

    float x,y,resultado;

    scanf("%f %f",&x,&y);
    
    resultado = ((x*3.5) + (y*7.5)) / 11;

    printf("MEDIA = %.5f\n",resultado);

   return 0;
}