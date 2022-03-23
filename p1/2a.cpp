#include <iostream>
using namespace std;
#include <stdio.h>


class No{

public:
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


    int acharProduto(No* no){
        /*
        
        iniciando a variavel no arvore fazendo um if para saber se nas funções possuem algo, se não tiver vai incrementar o que
        tem dentro do getEsq e getDir, dentro do if vai icrementar os valor na variavel produto
        
        */
        int produto = 1;
        if(no->getDir() == NULL && no->getEsq() == NULL){
            produto *= no -> valor;

        }else{
            produto *= acharProduto(no->getEsq());
            produto *= acharProduto(no->getDir());

        }
        return produto;
    }

};

int main(int argc, char* argv[]){

    //inicializando a arvore
    Arvore arv;

    

    //pecorre em ordem iniciando da raiz
    arv.inserir(6);
	arv.inserir(4);
	arv.inserir(7);
    arv.inserir(1);
	arv.inserir(5);
	arv.inserir(8);
	arv.inserir(9);

    //cout << "O produto das folhas eh: " << produto(ArvoreExemplo.raiz) << endl;
    cout << "Produto: " << arv.acharProduto(arv.getRaiz()) << endl;
    cout << endl;


    
    

    return 0;
}