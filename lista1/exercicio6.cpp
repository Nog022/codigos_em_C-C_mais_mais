#include <iostream>
#include <new>

//Criação da pilha com o dado e o endereço do próximo
class PilhaMin1{
public:
    PilhaMin1* prox;
    int dado;
};
//Criação da pilha para encadear, com suas váriaveis e funções
class PilhaEnc1{
public:
    PilhaMin1* inicio;
    int n;
    

    void cria(){
        // denominando os valores dos ponteiros e variaveis
        this -> n = 0;
        this -> inicio = 0;
    }

    void libera(){
        //fazendo um laço para o esfaziamento dos elementos na pilha 
        while(this -> n > 0){
            PilhaMin1* p = this -> inicio -> prox;
            delete this -> inicio;
            this -> inicio = p;
            this -> n--;
        }
    }

    void empilha(int y){
        //criando local pra armazenar os elementos com new 
        PilhaMin1* no = new PilhaMin1;
        //passnado os valores com um no ->, facilitando a incrimentação:
        no -> dado = y;
        no -> prox = this -> inicio;
        //passando no para inicio
        this -> inicio = no;
        //incrementando o n
        this -> n++;
    }

    int desempilha(int y){
        //pegando o ponteiro p e passando prox
        PilhaMin1* p = this -> inicio -> prox;
        //criando uma variavel e icrimentando os elementos para desempilhar 
        int r = this -> inicio -> dado;
        //deletandoa a variavel inicio para o descremento 
        delete this -> inicio;
        //alocando um novo valor pra ela
        this -> inicio = p;
        //logo descrementando o n para pega todos os elementos 
        this -> n--;
        //retornando os elemento um por um 
        return r;
    }


    int topo(){
        //retornando os elementos que estão encima da pilha 
        return this -> inicio -> dado;
    }

    int obterMinimo(int minimo){
        //pegando o ponteiro no e passando os elementos 
        PilhaMin1* no = this -> inicio -> prox;
        //inicializando a varivael menor elemento com valor da pilha 
        int menor_elemento = this -> inicio -> dado;
        menor_elemento = no -> dado;

        //criando um for pra localizar o menor elemento da pilha 
        for(int i = 0; i < this -> n-1; i++){
            //se o eleemnto for menor que a variavel menor elemento
            if(no -> dado < menor_elemento){
                //menor elemento vai receber o elemento proposto 
                menor_elemento = no -> dado;
            } 

            no = no -> prox;
            
        }
        //retornando o menor elemento 
        return printf("Menor elemento: %d",menor_elemento);
    }
};

int main(){
    //inicializando a pilha 
    PilhaEnc1 p;
    //inicializando os valores para os elementos porpostos 
    p.cria();
    //passando os elementos para serem alocados 
    p.empilha(1);
    p.empilha(2);
    p.empilha(3);
    //puxando a função para descobrir o menor elemento 
    p.obterMinimo(0);
    
    p.libera();
    return 0;
}