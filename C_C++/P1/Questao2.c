#include <stdio.h>;

int calculaTamanho(char*palavra){

    int tam=0;
    
    // COMPLETAR AQUI
    while(palavra[tam] != '\0'){
        tam += 1;
    }
     

    return tam;
}
void rotPalavra(char*palavra){
    int tamanho;

    tamanho = calculaTamanho(palavra);

    palavra[tamanho]=palavra[0];

    //COMPLETAR AQUI

    for()

        

    }

    palavra[tamanho]=0;

}

int main(){

    char palavra[50];

    int tamanho;

    scanf("%s",palavra);

    rotPalavra(palavra);

    printf("%s\n",palavra);

}