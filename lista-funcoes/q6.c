#include<stdio.h>
#include<stdlib.h>
#define TAM 3

char letras[];
int i=0;
 char ler3Letras(){
  for(int i=0; i<TAM; i++){
    printf("\ndigite uma letra:");
    scanf("%c",&letras[i]);
    getchar();
   }
  return letras[i]; 
}

int main(){
  
 ler3Letras();
  printf("\nLetras digitadas foram: ");
  for(int i=0; i<TAM; i++){
    printf("%c",letras[i]);
   }
  return 0;
}

