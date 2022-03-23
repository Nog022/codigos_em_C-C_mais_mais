#include <stdio.h>
#include <stdlib.h>

int main () {
    int quantidade = 0;

    scanf("%d", &quantidade);

    int* lista = malloc(quantidade * sizeof(int));

    for (int i = 0; i < quantidade; i++) {
        int valor = 0;

        scanf("%d", &valor);

        lista[i] = valor;
    }

    int maior = lista[0];
    int menor = lista[0];

    for (int i = 0; i < quantidade; i++) {
        int atual = lista[i];

        if (atual > maior) {
            maior = atual;
        } else if (atual < menor) {
            menor = atual;
        }
    }

    int diferenca = maior - menor;

    printf("O menor é %d, maior é %d, a diferença entre eles é %d.", menor, maior, diferenca);
}
