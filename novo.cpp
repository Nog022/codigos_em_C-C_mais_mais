/*
1 - 

a) Para que se chegue no melhor caso B[6] >= 300,  de forma que o codigo nao entrara nos loops. A complexidade é O(N). No pior caso, onde B[6] < 300 a complexidade é O(N^2).

b)Os dois tem o mesmo nivel de complexidade O(N) pois nao ha um caso melhor ou pior

c)No melhor caso o algoritmo entra no "if" do segundo "for" e tem complexidade O(N^4)O(100). No pior, caso entre no else do mesmo "for", a complexidade é O(N^4)O(500)

2 - 

a) 

int produtoFolhas(No *no){
    int prod = 1;
    if(no){
      if(no->dir == NULL && no->esq == NULL){
        prod *= no->valor;
      }else{
        prod *= produtoFolhas(no->esq);
        prod *= produtoFolhas(no->dir);
      }
    }
    return prod;
  }

b) 	

void emOrdem(No* no)
	{
		if(no != NULL)
		{
			emOrdem(no->getEsq());
			cout << no->getChave() << " ";
			emOrdem(no->getDir());
		}
	}

Em ordem: 1 - 4 - 5 - 6 - 8 - 7 - 9

3 - 

F
V
F

4 - 

Para realizar as operaçoes de fila usando duas pilhas eu verifico se as duas pilhas estao vazias para adicionar o primeiro elemento. Caso sim, ele é adicionado na pilha1. Caso ja tenha alguma coisa, o conteudo da pilha1 é transferido pra pilha2, o novo numero é adicionado na pilha1 e o conteudo que foi para a pilha2 volta pra pilha1. Dessa forma, o conteudo da pilha1 fica de maneira que o topo da pilha funciona como a frente da fila. Caso seja escolhida a opçao 2 no switch, basta remover o topo para que a operaçao funcione como remover da frente da fila.


#include<iostream>
#include <stack>
using namespace std;

int menu(){
  int opcao;
  cout << endl << "Digite:" << endl <<  "1 - Para adicionar elementos na fila" << endl << "2 - Para remover elementos da fila" << endl ;
  cin >> opcao;
  return opcao;
}

void vazia(){
	cout << endl << "A fila esta vazia!" << endl;
}

int main(){
	stack<int> pilha1;
	stack<int> pilha2;
	int op, num = 1;
  	op = menu();
	while(op != 3){
		switch(op){
			case 1:
				cout << endl <<"Digite o numero que deseja adicionar na fila: ";
				cin >> num;
				cout << endl;
				if(num != 0){
				if(pilha1.empty() && pilha2.empty()){
					pilha1.push(num);
				}
				else{
					while(!pilha1.empty()){
					pilha2.push(pilha1.top());
					pilha1.pop();
					}
					pilha1.push(num);
					while(!pilha2.empty()){
					pilha1.push(pilha2.top());
					pilha2.pop();
					}
				}
				}
				break;
			case 2:
				if(!pilha1.empty()){
					cout << endl << "Removendo valor da frente da fila" << endl;
					pilha1.pop();
				}
				else{
					vazia();

*/