#include <stdio.h>

int main(){

    int metro,decimetro = 10,centimetro = 100, milimetro = 1000;

    printf("Digite um valor em metro:");
    scanf("%d", &metro);

    int metro_para_decimetro = metro * decimetro;

    int metro_para_centimetro = metro * centimetro;

    int metro_para_milimeto = metro * milimetro;


    printf("Em decimetro: %d, centimetro: %d, milimetro: %d", metro_para_decimetro, metro_para_centimetro, metro_para_milimeto);




}