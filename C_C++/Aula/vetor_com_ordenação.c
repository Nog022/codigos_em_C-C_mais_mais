#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ordena(int *v,int n){
    int aux;
    for(int i = n-1; i > 1; i--){
        for(int j = 0; j < i; j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }

    }


}


int main(){
    
    int tamanho;
    int *ptr;

    scanf("%d",&tamanho);

    ptr = (int *) malloc(tamanho *sizeof(int));

    srand(time(0));
    for(int i = 0; i < tamanho; i++){
        ptr[i] = rand()%1000;
    }

    ordena(ptr,tamanho);

    for(int i = 0; i < tamanho; i++){
        printf(" %d ",ptr[i]);
    }
    printf("\n\n");
}


/*

{
   int n,count,achar_nota,resultado,nota;
   float numeros;
   char nomes;
   
   sscanf(entrada,"%d %n",&n, &count);
   entrada += count;
   

   std::vector <float> vector;

   for(int i = 0; i < n; i++){
      sscanf(entrada,"%f &c %*s %n",&nota,&nomes,&count);
      entrada += count;
      vector.push_back(nota);
      
   }

   sscanf(entrada,"%d %n",&achar_nota,&count);
   entrada += count;

   if(vector[achar_nota] >= 6){
      resultado = 1;
   }else{
      resultado = 0;
   }
   
   
   return resultado;
}

*/