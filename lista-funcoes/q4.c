#include<stdio.h>
#include<stdlib.h>
ler3Numeros();

// MAIN
 int main(){
  ler3Numeros();
  return 0;
 } 
// função
void ler3Numeros (void){
   int numero[3];
    for(int index =0; index<3; index++){
      printf("\nDigite o  Numero: ");
      scanf("\n%d",&numero[index]);  
      numero[index] = index;
         }

 printf("Vetor:\n[ ");
   for(int index=0; index<3; index++){
      printf("%d\t",numero[index]);  
      }
    printf("]\n");
 }

