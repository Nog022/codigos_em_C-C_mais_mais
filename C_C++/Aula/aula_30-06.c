#include <stdio.h>

int main(){

    char c1[2] = {'A','E'};
   // char c2 = 'E';
    char **p;
    char *q;

    q = c1;
    p = &q;
    
    printf("%c\n", *q);
    printf("%c\n", **p);

    p++;q++;

    printf("%c\n", *q);
    printf("%c\n", **p);

    
}