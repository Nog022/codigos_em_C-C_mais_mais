#include <stdio.h>

struct pessoa{
  int idade;
  int peso;
};

int main(){

  struct pessoa *ptrPessoa, pessoa2;

  ptrPessoa=&pessoa2;

  scanf("%d",&ptrPessoa->idade);
  scanf("%d",&(*ptrPessoa).peso);

  printf("Idade=%d, Peso=%d.\n",(*ptrPessoa).idade,ptrPessoa->peso);
  printf("Idade=%d, Peso=%d.\n",pessoa2.idade,pessoa2.peso);


}
