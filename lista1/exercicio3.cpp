#include <iostream>
#include <stack>
#include <new>
#include <stdio.h>



class Fila2p{
public:

    std::stack<char> p1;
    std::stack<char> p2;

    char frenteFila(){
        return p1.top();
    }

    void Enfileira(char x){
        //empilhando topo de p1 para p2
        while(p1.size() > 0){
            p2.push(p1.top());
            //apaga topo de p1 
            p1.pop(); //pop = desempilha  
        }

        //p1 está vazia, logo adiciona os novos elementos nele
        p1.push(x);

        //retornando todos os elementos de p2 para p1
        int n = p2.size();

        for(auto i = 0; i< n; i++){

            p1.push(p2.top());
            //apaga topo de p2
            p2.pop();
        }
        
    }

    void Desenfileira(){
        p1.pop();
    }


};

int main(){
    Fila2p f1;

    f1.Enfileira('A');
    f1.Enfileira('B');
    f1.Enfileira('C');

    printf("Frente: %c\n",f1.frenteFila());
    f1.Desenfileira();
    printf("Frente: %c\n",f1.frenteFila());
    f1.Desenfileira();
    printf("Frente: %c\n",f1.frenteFila());
    f1.Desenfileira();
    


    return 0;
}