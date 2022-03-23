#include <stdio.h>

int main(){

    int i,j,p,q;

    i=1;

    j=i++;

    p= 1; q=++p; 
    printf("i=1;j=i++;\n");
    printf("p= 1; q=++p;\n");
    printf("i=%d, j=%d, p=%d, q=%d\n",i,j,p,q);

    
}