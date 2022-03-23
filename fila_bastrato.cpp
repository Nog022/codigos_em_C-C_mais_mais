#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int qretrive();
void qstore(int i);

int fila[MAX];
int fim = 0;
int ini = 0;

int main(){
    qstore(10);
    qstore(20);
    qstore(30);
    qstore(40);
    qstore(50);
    qretrive();
    qretrive();
    qretrive();
    qretrive();
    qretrive();
}

void qstore(int i){
    if(fim == MAX){
        printf("Fila cheia.\n");
    }

    fila[fim] = i;
    fim++; 
    printf("Enfileirando %d\n",i);
}

int qretrive(){
    if(ini == fim){
        printf("Fila vazia.\n");
        return 0;
    }

    ini++;
    printf("Desenfileirando %d\n",fila[ini-1]);
    return fila[ini -1];

}