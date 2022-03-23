#include <stdio.h>
#include <stdlib.h>


int Frente, Tras;
int Fila[1000];

void Fila_construtor(){
    Frente = 0;
    Tras = -1;
}

bool Fila_vazia(){
    if(Frente > Tras){
        return true;

    }
}

int main(){

    system("pause");
    return 0;


}