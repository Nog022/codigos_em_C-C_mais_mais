//TAD: TIPO ABSTRATO DE DADOS

#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100

typedef struct {
    int item[MAXTAM];
    int Topo;

} TPilha;

void TPilha_inicia(TPilha *p){
    p->Topo = -1;
}

int TPilha_vazia(TPilha *p){
    if(p->Topo == -1){
        return -1;

    }else{
        return 0;
    }
}

int TPilha_cheia(TPilha *p){
    if(p->Topo == MAXTAM-1){
        return 1;

    } else{
        return 0;
    }
}

void TPilha_insere(TPilha *p, int x){
    if(TPilha_cheia(p) == 1){
        printf("ERRO: Pilha cheia");
    
    }else{
        p->Topo++;
        p->item[p->Topo] = x;
    }

}

int TPilha_remove(TPilha *p){
    int aux;
    if(TPilha_vazia(p) == 1){
        printf("ERRO: Pilha vazia");
    
    }else{
        aux = p->item[p->Topo];
        p->Topo--;
        return aux;
    }
}

int main(){
    TPilha *p = (TPilha*)malloc(sizeof(TPilha));
    TPilha_inicia(p);

    TPilha_insere(p, 1);
    TPilha_insere(p, 2);
    TPilha_insere(p, 3);

    int aux;

    aux = TPilha_remove(p);
    printf("\n Saiu: %d",aux);

    aux = TPilha_remove(p);
    printf("\n Saiu: %d",aux);

    aux = TPilha_remove(p);
    printf("\n Saiu: %d",aux);

    aux = TPilha_remove(p);
    printf("\n Saiu: %d",aux);
}