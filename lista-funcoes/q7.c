#include<stdio.h>
#include<stdlib.h>
#define TAM 3
char palavra[3][50];
int i=0;

char ler3Palavras(){
  for(i=0; i<TAM;i++){
  printf("digite a plavra: ");
  scanf("%s",&palavra[i]);
  getchar();
    }
return palavra[i];
}

int main(){

  ler3Palavras();
  
  for( i=0; i<TAM; i++){
  printf("\n%d - Palavra digitada: %s\n",i+1, palavra[i]);
}
  return 0;
}
  