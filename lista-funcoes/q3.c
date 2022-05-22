#include<stdio.h>
#include<stdlib.h>

 

int fatorial (int n){
  // utilizado operador ternario 
 if (n<0){
   return n;
 }  else if(n == 0 ||n == 1) {
   return 1;
 }else{ 
  return n * fatorial(n-1);
  }
  }
 int main(){
   int n;
   printf("digite um numero:\n");
   scanf("\n%d", &n);
   printf("Fatorial de %d é %d\n",n,fatorial(n));
  
   return 0;
 }