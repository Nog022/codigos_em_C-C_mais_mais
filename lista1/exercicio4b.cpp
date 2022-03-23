#include <new>
#include <iostream>
#include <stdio.h>
//Criação da Pilha com o dado e o endereço do próximo
class PilhaNo1{
public:
    char dado;
    PilhaNo1* prox;
};
//Criação da Pilha para encadear, com suas váriaveis e funções
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
        return printf("Topo: %c\n",this -> inicio -> dado);
    }

    void empilha(char x){
        //criando local pra armazenar os elementos com new 
        PilhaNo1* no = new PilhaNo1;
        //passnado os valores com um no ->, facilitando a incrimentação
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

    //inicializando pilha 1,2 e 3
    PilhaEnc1 p1;
    PilhaEnc1 p2;
    PilhaEnc1 p3;
    //chamando a função para alocar os valores dos ponteiros e variaveis
    p1.cria();
    p2.cria();
    p3.cria();

    //alocando elementos em cada pilha 
    p1.empilha('A');
    p2.empilha('B');
    p3.empilha('C');

    //passando o valor de n em fila para tamamnho 
    int tamanho = p1.n;

    //fazendo p2 empilhar os elementos do topo de p1
    for(int i = 0; i < tamanho; i++){
        p2.empilha(p1.topo());
        //logo desempilhando o elemento que ficou no p1
        p1.desimpilha();
    }

    //fazendo p3 empilhar os elementos do topo de p2
    for(int i = 0; i < tamanho; i++){
        p3.empilha(p2.topo());
        //logo desempilhando o elemento que ficou no p2
        p2.desimpilha();
    }

    //fazendo p1 empilhar os elementos do topo de p3
    for(int i = 0; i < tamanho; i++){
        p1.empilha(p3.topo());
        //logo desempilhando o elemento que ficou no p3
        p3.desimpilha();
        
    }

    //Liberando os elementos em cada uma das pilhas 
    p1.libera();
    p2.libera();
    p3.libera();
    

    return 0;
}