#include <stdio.h>
#include <stdlib.h>

int man (){


    int v[100];
    int *ptr;
    int *ptr2;
    int n;

    printf("Digite numero:");
    scanf("%d",&n);

    ptr = (int*) calloc(n, sizeof(int));
    ptr2 = (int*) calloc(n * sizeof(int));

    prinf
    for (int i = 0; i< n; i++)
        ptr[i] = i*i;

    printf("\n\n Imprimindo \n\n");
    for (int i = 0;i<n; i++)
    printf("%d,",ptr[i]);

    free



}