#include<stdio.h>
#include<stdlib.h>

 
int soma(int primeiroNumero, int segundoNumero){
  return primeiroNumero+segundoNumero;
}
 int main(){
   int primeiroNumer, segundoNumero;
   
   printf("Digite o primeiroNumero: ");
   scanf("\n%d",&primeiroNumero);
   printf("Digite o segundoNumero: ");
   scanf("\n%d",&segundoNumero);
   printf("\n %d",soma(primeiroNumero,segundoNumero)); 
   
   return 0;
 }