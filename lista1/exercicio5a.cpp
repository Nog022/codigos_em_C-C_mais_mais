#include <iostream>
#include <new>
//Criação da fila com o dado e o endereço do próximo
class FilaNo1{
public:
    int dado;
    FilaNo1* prox;
};
//Criação da fila para encadear, com suas váriaveis e funções
class FilaEnc1{
public:
    FilaNo1* inicio;
    FilaNo1* fim;
    int n;

    void cria(){
        // denominando os valores dos ponteiros e variaveis
        this -> n = 0;
        this -> inicio = 0;
        this -> fim = 0;
    }

    void libera(){
        //fazendo um laço para liberar cada elemento da fila 
        while(this -> n > n){
            FilaNo1* p = this -> inicio;
        }
    }

    char frente(){
        //retornando o elemento que está na frente da fila 
        return this -> inicio -> dado;
    }

    void enfileira(char x){
        //criando local pra armazenar os elementos com new
        FilaNo1* no = new FilaNo1;
        //passnado os valores com um no ->, facilitando a incrimentação dos elementos dos dados e prox
        no -> dado = x;
        no -> prox = 0;
        //se n igual a 0 inicio vai receber o valor de fim q vai receber do no
        if(n == 0){
            inicio = fim = no;
        //se não, prox vai receber o no e fim vai receber no tambem 
        }else{
            fim -> prox = no;
            fim = no;
        }
        //incrimento o n para o funcionamento do laço
        this -> n++;
    }

    char desenfileira(){
        //pegando o ponteiro p e passando inicio
        FilaNo1* p = this -> inicio;
        //inicio vai receber prox
        inicio = inicio -> prox;
        //criando uma variavel e passando o valor dos dado
        char r = p -> dado;
        //deletando p para o descremento 
        delete p;
        //diminuindo o n para pegar cada elemento 
        this -> n--;
        //retornando o r e deseinfeilando
        return r;
    }

};
//Criação da pilha com o dado e o endereço do próximo
class PilhaNo1{
public:
    char dado;
    PilhaNo1* prox;
};
//Criação da pilha para encadear, com suas váriaveis e funções
class PilhaEnc1{
public:
    PilhaNo1* inicio;
    int n;

    void cria(){
        // denominando os valores dos ponteiros e variaveis
        this -> n = 0;
        this -> inicio;
    }

    void libera(){
        //fazendo um laço para o esfaziamento dos elementos na pilha
        while(this -> n > 0){
            PilhaNo1* p = this -> inicio -> prox;
            delete this -> inicio;
            this -> inicio = p;
            this -> n--;
        }
    }

    char topo(){
        //mostrando os elementos estão na parte de cima da pilha 
        return printf("Topo: %c\n",this -> inicio -> dado) ;
    }

    void empilha(char x){
        //criando local pra armazenar os elementos com new 
        PilhaNo1* no = new PilhaNo1;
        //passnado os valores com um no ->, facilitando a incrimentação dos elementos dos dados e prox
        no -> dado = x;
        no -> prox = this -> inicio;
        //passando no para inicio
        this -> inicio = no;
        //incrementando o n
        this -> n++;
    }

    char desimpilha(){
        //pegando o ponteiro p e passando prox
        PilhaNo1* p = this -> inicio -> prox;
        //criando uma variavel e icrimentando os elementos para desempilhar
        char r =  this -> inicio -> dado;
        //deletandoa a variavel inicio para o descremento 
        delete this -> inicio;
        //alocando um novo valor pra ela
        this -> inicio = p;
        //logo descrementando o n para pega todos os elementos
        this -> n--;
        //retornando os elemento um por um 
        return r;
    }


};

int main(){
    //inicializando fila e pilha
    FilaEnc1 fila;
    PilhaEnc1 pilha;

    //chamando a função para alocar os valores dos ponteiros e variaveis
    fila.cria();    
    pilha.cria();

    //chamando a fnção para fila e empilhando os elementos
    fila.enfileira('A');
    fila.enfileira('B');
    fila.enfileira('C');

    //passando o valor de n em fila para tamamnho 
    int tamanho = fila.n;

    //fazendo um laço para empilhar o elemento que está na frente na lista  e colocando na pilha 
    for(int i = 0; i < tamanho; i++){
        pilha.empilha(fila.frente());
        //Desinfileirando logo depois, para uma interação dinâmica
        fila.desenfileira();
    }
    //fazendo um laço para empilhar o elemento que está nno topo da pilha e colocando na fila 
    for(int i = 0; i < tamanho; i++){
        fila.enfileira(pilha.topo());
        //Desimpilhando logo depois, para uma interação dinâmica
        pilha.desimpilha();
    }

    //chamando as funções libera para desanexar os espaço na memória 
    fila.libera();
    pilha.libera();

    return 0;
}
