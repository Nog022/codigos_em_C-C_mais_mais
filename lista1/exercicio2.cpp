#include <iostream>
#include <queue>

#include <stdio.h>


class Pilha2f{
public:

    std::queue<char> f1;
    std::queue<char> f2;
    //Seu comportamento é descrito como LIFO (last-in first-out), ou seja, o
    //último elemento a entrar na pilha será o primeiro a sair.
    char topo(){
        //return f1.top();
    }

    void desempilhar(){

    }

    int empilhar(char x){
        
        
        f1.push(x);
        f2.push(f1.push(x));



    }


    
};



int main(){
    Pilha2f p1;

    p1.empilhar('A');
    p1.empilhar('B');
    p1.empilhar('C');

    return 0;
}