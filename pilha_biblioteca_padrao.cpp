#include<stdio.h>

class NoPilha1 {
public:
    char dado;
    NoPilha1 *prox;
};

class PilhaEnc1 {
public:
    NoPilha1* inicio;
    int N;

    void cria() {
        this->N = 0; // Zero elementos na pilha
        this->inicio = 0; // Endereço zero de memoria
    }

    void libera() {
        while (this -> N > 0) {
            NoPilha1 * p = this->inicio->prox;
            delete this->inicio;
            this -> inicio = p;
            this-> N--;
        }
    }

    void empilha(char v) {
        auto* no  = new NoPilha1{.dado = v, .prox = this -> inicio};
        this->inicio = no;
        this->N++;
    }

    char desempilha() {
        NoPilha1* p = this->inicio->prox; // recuperar quem era o proximo do inicio
        char r = this->inicio->dado; // guardar o proprio dado
        delete this->inicio; //apaga o nó
        this->inicio = p;
        this -> N--;
        return r;
    }

    char topo() {
        return this->prox[N - 1];
    }
};

int main() {
    PilhaEnc1 p;
    p.cria();
    p.empilha('A');
    p.empilha('B');
    p.empilha('C');
    printf("%c\n", p.topo());
    printf("%c\n", p.desempilha());

    return 0;
}