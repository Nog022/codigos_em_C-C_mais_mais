#include <iostream>
#include <stack>
#include <new>
#include <stdio.h>



class Fila2p{
public:

    std::stack<char> p1;
    std::stack<char> p2;



    // top() -> O(1)
    // pop() -> O(1)
    // push() -> O(1)
    char frenteFila(){
        return p1.top();
    }

    void Enfileira(char x){
        //empilhando topo de p1 para p2
        // N x O(1) = O(N) = LINEAR !!! 

        while(p1.size() > 0){
            // 1 push + 1 top = 1 x O(1) + 1 x O(1) = O(1)
            p2.push(p1.top());
            //apaga topo de p1 
            // 1 x pop = 1 x O(1) = O(1)
            p1.pop(); //pop = desempilha  
            // = O(1) + O(1) = O(1)
        }

        //p1 está vazia, logo adiciona os novos elementos nele
        // O(N) + O(1) = O(N+1) = O(N) = Linear (Linear + Constante continua linear)
        p1.push(x);

        //retornando todos os elementos de p2 para p1
        int n = p2.size();
        // N x O(1) = O(N) = LINEAR
        for(auto i = 0; i< n; i++){

            p1.push(p2.top());
            //apaga topo de p2
            p2.pop();
        }
        // resumo: O(N) + O(1) + O(N) = O(N) = O(2N+1) = O(2N) = O(N)
        // N x O(N) = O(N²) >>> O(N)
        
    }

    void Desenfileira(){
        // 1 pop = 1 x O(1) = O(1)

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