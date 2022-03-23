#include <stdio.h>
#include <stdlib.h>
#define MAXN 5

/*
 o deque é uma pilha e uma fila(encadeada) ao mesmo tempo entrando por um lado e saindo por outro 
 (o ultimo a entrar é o primeiro a sair)

 ou pode utilizar um vetor e utilizar ele 

*/


void criar(int* vetor,int num,int* var){
/*
em criar eu utilizei um vetor e encrementei os elementos no vetor usando a variavel var
*/
    vetor[*var] = num;
    (*var)++;

}

void insereInicio(int* vetor,int inicio){
//utilizei a variavel inicio para definir a primeira posição do vetor 

    vetor[inicio] = 99;
    
}


void insereFim(int* vetor, int n){
//utilizei (n-1) para pegar a ultima posição do vetor
    vetor[n-1] = 100;
}

int removeInicio(int* vetor, int inicio){
// passei a variavel inicio para pegar a primeira posição do vetor e colocando ele como NULL
    vetor[inicio] = NULL;
    
}

int removeFim(int* vetor, int n){
// passei (n-1) para pegar a ultima posição do vetor e colocando ele como NULL
    vetor[n-1] = NULL;
    
}

//operação de consulta, pega o elemento do inicio 
int buscaInicio(int* vetor, int inicio){
//acesso a primeira posição utilizando a variavel inicio como indice e printei o primeiro elemento
    return printf("Esse é o primeiro elemento: %d\n",vetor[inicio]);
}
//operação de consulta, pega o elemento do fim 
int buscaFim(int* vetor, int n){
//acesso a ultima posição utilizando (n-1) como indice e printei o ultimo elemento
    return printf("Esse é o ultimo elemento: %d\n",vetor[n-1]);
}

int main(){
//utilizei um vetor
    int* vetor;

    int var = 0;
    int n = MAXN;
    int inicio = 0;
    
//criando um vetor com malloc 
    vetor = (int*)malloc(n * sizeof(int));

//utilizando um for para puxar a função criar de uma forma mais eficiente 

    for(int i = 1; i < n+1; i++){
        criar(vetor,i,&var);
    }


    for(int i = 0; i < n;i++){
        printf("%d\n",vetor[i]);

    }
    printf("---------\n");


    insereInicio(vetor,inicio);
    for(int i = 0; i < n;i++){
        printf("%d\n",vetor[i]);

    }
    printf("---------\n");

    insereFim(vetor,n);
    for(int i = 0; i < n;i++){
        printf("%d\n",vetor[i]);

    }
    printf("---------\n");

    buscaInicio(vetor,inicio);
    buscaFim(vetor, n);
    removeInicio(vetor, inicio);
    removeFim(vetor,n);
    
    

    for(int i = 0; i < n;i++){
        printf("%d\n",vetor[i]);

    }


    

    return 0;
}