

#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

#include <conio.h>

#include <string.h>



main () {

int vet[5],i,contador=0, num[5],j;


   for(i=0;i<5;i++)
    {

    printf("Digite o valor %i:",i+1);

    scanf("%i",&vet[i]);

    if (vet[i]>=10)
    {
        contador++;


    }

    }
 for (j=0;j<5;j++)

    {
        if (vet[i]>=10)
        {
            printf("Estes são os valores maiores que 10:%i",vet[i]);
        }

    }

    printf("Há este total de numeros maiores que 10:%i\n\n", contador);

}