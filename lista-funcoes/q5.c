#include<stdio.h>
#include<stdlib.h>
#define TAM_VET 4

//declaração de struct
typedef struct {
int numero;
}numeros;

//função de leitura de numeros
numeros ler4Numeros(){
  numeros num[TAM_VET]; //declaração da struct

  //laço for para pegar o valor digitado e atrivuir num vetor
    for(int i = 0; i <TAM_VET ; i++){
        printf("Digite o numero: ");
        scanf("%d", &num[i].numero);
    }
  //impressão do vetor com os numeros
  printf("Vetor:\n[ ");
   for(int i = 0; i <TAM_VET ; i++){
      printf("%d\t",num[i].numero);  
      }
    printf("]\n");

  //retorno da função 
  return num[TAM_VET];
}

int main (){
  ler4Numeros();
}
