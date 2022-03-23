#include <iostream>
using namespace std;
#include <stdio.h>

/*
Criando uma No, passando valores de NULL para esq e dir 
no começo, valor vai receber a chave. Para distribuir os 
valores de forma mais dinamica, teremos o getChave, getEsq 
e getDir. E setando as variaveis nas funções set. Na parte da 
Arvore vai ter as funções inserir que vai começar uma alocação 
de elementos no raiz se raiz for NULL, se não vai pro inserirAux 
que vai fazer a parte de alocação e criação de um novo no se não 
corresponder aos caos. PreOrdem é tendo a impressão antes de visiar os 
filhois. EmOrdem Vissitando o filho que fica a esquerda, passando para o 
próprio no e depois os filhos na parte direita e o de PosOrdem visita
os filhos direitos e esquerdo e depois o proprio no.

*/
class No{

private:
    No *esq, *dir;
    int valor;

public:
    No(int chave){
        this -> valor = chave;
        esq = NULL;
        dir = NULL;
    }

    int getChave(){
        return valor;
    }

    No* getEsq(){
        return esq;
    }

    No* getDir(){
        return dir;
    }

    void setEsq(No* no){
        esq = no;
    }

    void setDir(No* no){
        dir = no;
    }
};

class Arvore{
private:
    No* raiz;

public:
    Arvore(){
        raiz = NULL;
    }

    void inserir(int chave){
        if(raiz == NULL){
            raiz = new No(chave);
        }
        else{
            inserirAux(raiz, chave);
        }
    }

    void inserirAux(No* no, int chave){
        if(chave < no->getChave()){
            if(no->getEsq() == NULL){
                No* novo_no = new No(chave);
                no->setEsq(novo_no);
            }
            else{
                inserirAux(no->getEsq(), chave);
            }
        }
        else if(chave > no->getChave()){
            if(no->getDir() == NULL){
                No* novo_no = new No(chave);
                no->setDir(novo_no);
            }
            else{
                inserirAux(no->getDir(), chave);
            }
        }
    }
    No* getRaiz(){
        return raiz;
    }

    

   //a)
   void pre_ordem(No* no){
       if(no != NULL){
        printf("%d ",no->getChave());
        pre_ordem(no->getEsq());
        pre_ordem(no->getDir());
                        
       }
   }

   //b)
   void emOrdem (No* no){
        if(no != NULL){
            emOrdem(no->getEsq());
            //cout << no->getChave() << " ";
            printf("%d ",no->getChave());
            emOrdem(no->getDir());
        }
    }

    //c)

    void pos_ordem(No* no){
        if(no != NULL){
            pos_ordem(no->getEsq());
            pos_ordem(no->getDir());
            printf("%d ",no->getChave());
        }
    }
};



int main(int argc, char* argv[]){

    //inicializando a arvore
    Arvore arv;
    

    //pecorre em ordem iniciando da raiz
    arv.inserir(10);
	arv.inserir(20);
	arv.inserir(15);
	arv.inserir(12);
	arv.inserir(8);
	arv.inserir(5);
	arv.inserir(7);
	arv.inserir(1);
	arv.inserir(2);

    //cout << "Percorrendo em ordem...\n";
    printf("Percorrendo...\n");
    arv.pre_ordem(arv.getRaiz());

    return 0;
}