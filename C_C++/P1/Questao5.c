#include <stdio.h>

int f(int b, int p){

    if (p > 0 && b > 0){
        return ((b - 1) * f (b , p - 2));
    }

    else{
        return 1;

    }

}
int main(){

    int b, p, resultado;

    scanf("%d",&b);

    scanf("%d",&p);

    resultado = f(b,p);

    printf("%d\n", resultado);

    return 0;
}

*explicação
Na entra temos dois numero inteiro b e p, a variavel resultado puxa uma função f que vai diminuindo o 'p' que vai ate chegar ao 1 que 
vai diminuir uma vez p 11 para 10 e vai ir para condição else com ternorno 1 se repetirar mais 3 vezes retorando 1000 a variavel retorno 


1ª chamada b = 11 e p = 5
2ª chamada b = 11 e p = 3
3ª chamada b = 11 e p = 1


