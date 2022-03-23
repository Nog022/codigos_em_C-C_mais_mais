#include <stdio.h>

void recursao(int i){

    printf("%d", i);
    i++;
    recursao(i);

}


int main(void){

    recursao(1);




}