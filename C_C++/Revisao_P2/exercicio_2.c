#include <stdio.h>
#include <stdlib.h>

struct no {
int dado;
struct no *proximo;
};

struct no *inicio = NULL;

void mL() {

    struct no *ptr = inicio;

    int i=0;

    printf("\n[inicio] =>");

    while(ptr != NULL) {
        printf(" %d =>",ptr->dado);
        ptr = ptr->proximo;
        i++;
    }

    printf(" [null]\n");
}
void iiL(int dado) {

    struct no *novo = (struct no*) malloc(sizeof(struct no));

    struct no *ptr = inicio;
    int t=1;

    while(ptr != NULL) {
        t=2*t;
        ptr = ptr->proximo;
    }

    novo->dado = t;
    novo->proximo = inicio;
    inicio = novo;

}
int main() {
    iiL(13);
    iiL(11);
    iiL(7);
    iiL(5);
    iiL(3);
    iiL(2);
    mL();
    return 0;
}