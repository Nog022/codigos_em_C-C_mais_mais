#include <stdio.h>

int main(){

    int i;
    int * ptr;

    i=1;
    ptr=&i;

    printf("i=%d, ptr=%x, *ptr=%d, &i=%x.\n",i,ptr,*ptr,&i);

}