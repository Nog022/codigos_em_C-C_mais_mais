#include <iostream>
using namespace std;
#include <stdio.h>

/*
A soma das folhas é contar os filhos da arovore. PreOrdem é tendo a impressão antes de visiar os 
filhois. EmOrdem Vissitando o filho que fica a esquerda, passando para o 
próprio no e depois os filhos na parte direita e o de PosOrdem visita
os filhos direitos e esquerdo e depois o proprio no. A altura é contabilizar os elementos direitos e esquerdo

*/

class No{
public:
    int valor;
    No* esq;
    No* dir;

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




class Arvore {
public:
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

    int soma_das_folhas(No* no){
        if(no == NULL){
            return 0;
        }
        else{
            //retorna a função soma das folhas somando a parte esquerda e direita 
            
            return soma_das_folhas(no->getEsq()) + soma_das_folhas(no->getDir());
        }
        
        
    }

    //b)
   void pos_ordem(No* no){
        if(no != NULL){
            pos_ordem(no->getEsq());
            pos_ordem(no->getDir());
            printf("%d ",no->getChave());
        }
    }

    //c)
    void emOrdem (No* no){
        if(no != NULL){
            emOrdem(no->getEsq());
            //cout << no->getChave() << " ";
            printf("%d ",no->getChave());
            emOrdem(no->getDir());
        }
    }

    //d)
    void pre_ordem(No* no){
       if(no != NULL){
        printf("%d ",no->getChave());
        pre_ordem(no->getEsq());
        pre_ordem(no->getDir());
                        
       }
   }
   //e)
   int altura_da_arvore(No* no){
       //caso a arvore esteja vazia retorne o -1 como alternativa 
       int hE,hD;
       
       if(no == NULL){
           return -1;
       }
       else if(no != NULL){
           hE = altura_da_arvore(no ->getEsq());
           hD = altura_da_arvore(no ->getDir());
           
            if(hD > hE){
                return hD + 1;
            }else{
                return hE + 1;
            }
           
       }
   }

};




int main(){

    return 0;
}