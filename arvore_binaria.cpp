#include <iostream>
using namespace std;
#include <stdio.h>


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
    int produto;

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

    void emOrdem (No* no){
        if(no != NULL){
            emOrdem(no->getEsq());
            //cout << no->getChave() << " ";
            printf("%d ",no->getChave());
            emOrdem(no->getDir());
        }
    }

};

int main(int argc, char* argv[]){

    //inicializando a arvore
    Arvore arv;
    
    

    //pecorre em ordem iniciando da raiz
    arv.inserir(2);
	arv.inserir(3);
	arv.inserir(4);
	
    arv.inserir(14);
	arv.inserir(13);
	arv.inserir(1);
	arv.inserir(6);
	arv.inserir(4);
	arv.inserir(7);
    

    //cout << "Percorrendo em ordem...\n";
    printf("Percorrendo em ordem...\n");
    //printf("%d"),arv.getRaiz());
    arv.emOrdem(arv.getRaiz());

    return 0;
}