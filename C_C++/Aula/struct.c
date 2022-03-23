#include <stdio.h>

struct funcionario {
    int cod;
    char nome[30];
    float salario;
    int depto;
    int cargo;
};

typedef int inteiro;
typedef struct funcionario Funcionario;


int main(void){
    inteiro variavelnovotipo = 100;
    Funcionario func1, func2;
    func1.depto = 2;
    printf("%d; %d\n", func1.depto, variavelnovotipo);
}