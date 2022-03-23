#include <iostream>

constexpr int MAX_N = 50;

class Heap1{
public:
    int elemento[MAX_N];
    int n;

    void cria(){
        this -> n = 0;
    }

    void libera(){
        //não possui algo pra liberar
    }

    int frente(){
        return this -> elemento[0];
    }

    int insere(int pos){
        elemento[n] = pos;
        n++;
        sobe(n-1);

    }

    void troca(int a, int b, int* vetor){
        int x,y;
        x = vetor[a];
        
        vetor[a] = vetor[b];

        vetor[b] = x;
    }

    int pai(int pos){
        return (pos - 1) / 2;
    }

    int filho1(int pos){   
        return (2 * pos) + 1;
    }

    int filho2(int pos){   
        return filho1(pos) + 1;
    }

    void sobe(int pos){
        int p = pai(pos);
        while(pos > 0){
            //comparando filho com pai
            if(elemento[pos] >= elemento[p]){
                break;
            }

            troca(p, pos, elemento);
            pos = p;  //repete
            p = pai(pos);   
        }
    }

    void desce(int pos){
        int f = filho1(pos);
        while(f < n){
            //existe segundo filho?
            if((f < n-1) && (elemento[f+1] < elemento[f])){
                f = f + 1;
            }
            if(elemento[f] >= elemento[pos]){
                break;
            }

            troca(f, pos, elemento);
            pos = f;
            f = filho1(pos);
        }
    }

    int remove(){
        troca(0, n-1, elemento);
        n--;
        desce(0);
        return elemento[n];
    }
};

int main(){

    Heap1 elemento;
    elemento.cria();
    elemento.insere(1);
    elemento.insere(2);
    elemento.insere(3);
    elemento.insere(4);
    elemento.insere(5);
    /*
    printf("%d\n",elemento.frente());
    printf("%d\n",elemento.remove());
    */
    printf("Percorrendo...\n");
    while(elemento.n > 0){
        std::cout << elemento.remove();

    }



    return 0;
}