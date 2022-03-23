#include <new>
#include <iostream>

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

    //inicializando as pilhas p1 e p2
    PilhaEnc1 p1;
    PilhaEnc1 p2;

    //chamando a função para alocar os valores dos ponteiros e variaveis
    p1.cria();
    p2.cria();

    //alocando elementos em  pilha 1
    p1.empilha('A');
    p1.empilha('B');
    p1.empilha('C');

    //iniciando a variavel tamamnho e tamanhoAux, alocando p1.n em tamamnho e tamanho em tamanhoAux
    int tamanho = p1.n;
    int tamanhoAux = tamanho;

    //inicializando um for com a codição de i menor de tamamnho
    for(int i = 0; i < tamanho; i++){
        //inicializando uma variavel
        char variavel;
        //inicializando ponteiro no
        PilhaNo1* no;

        //no vai receber a variavel inicio da pilha 1
        no = p1.inicio;

        //inicializando um laço com a condição de i menor que tamanhoAux
        for(int i = 0; i < tamanhoAux; i++){
            //a variavel vai receber os elemento dado
            variavel = no -> dado;

            //no vai ser receber o ponteiro prox
            no = no -> prox;
        }
        //empilhando o variavel na pilha 2
        p2.empilha(variavel);
        //descrementando tamamnhoAux
        tamanhoAux--;

    }

    //inicializando um laço com a condição i menor que tamanho
    for(int i = 0; i < tamanho; i++){
        //empilhando o topo da pilha 2 na pilha 1
        p1.empilha(p2.topo());
        //logo desimpilhando o elemento que ficou em pilha 2
        p2.desimpilha();
        
    }

    //liberando os elementos de pilha 1 e 2
    p1.libera();
    p2.libera();

    return 0;
}