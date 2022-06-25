#include <stdio.h>
#include <stdlib.h>
# define TAM 10
int inverterVetor();
int main()
{
   int vetor[TAM] = {8, 12, 18, 22, 28, 37, 39, 50, 61,79};


   saidaVetor(vetor, TAM);
   printf("\n");
   inverterVetor(vetor, 0, TAM-1);
   printf("\n");
   saidaVetor(vetor, TAM);

   return 0;
}


void inverterVetor(int vetor[], int x, int y){

    int aux;

    if(x<y){

        aux=vetor[x];
        vetor[x]=vetor[y];
        vetor[y]=aux;
        inverterVetor(vetor, x+1, y-1);
    }

}

void saidaVetor(int vetor[], int a){

    if (a == 1){
        printf("%d \n", vetor[a-1]);
        }
    else
    {
        saidaVetor(vetor, a-1);
        printf("%d \n", vetor[a-1]);
    }

}
