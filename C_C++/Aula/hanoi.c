#include <stdio.h>

void hanoi(char O, char D, char T, int n){

    if(n == 1){
        printf("\n Disco 1%d: %c -> %c",O,D);
        return;
    }

    hanoi(O,D,T,n-1);
    printf("\n Disco %d: %c -> %c",n,O,D);
    hanoi(O,D,T,n-1);


}


int main(){

    int n;

    scanf('%d',&n);

    hanoi('O','D','T',n); //Origem, Destino e Trabalho
    printf('\n\n');
    




}