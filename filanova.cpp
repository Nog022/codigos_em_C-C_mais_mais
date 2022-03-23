#include <stdio.h>
#include <stdlib.h>
#define MAXN 5

typedef struct FilaNo{
    int inicio;
    int fim;
    int fila[MAXN];

};

FilaNo* criar(){
    FilaNo* f =(FilaNo*)malloc(sizeof(FilaNo));
    f -> fim = 0;
    f -> inicio = 0;
}

void inserir(){
    if((f -> fim) == MAXN){

    }
}



int remove(){

}

int main(){
    FilaNo* f = criar();
    
    inserir(f -> fim,1);


    return 0;
}