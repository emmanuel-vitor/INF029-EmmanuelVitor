#include <stdio.h>
int imprimirDecrescente();
int numero;
int main()
{
    
   imprimirDecrescente(5);
   
    return 0;
}

int imprimirDecrescente(int numero){
    
    if(numero>0 || numero==0){
        printf("Numero: %d\n ",numero);
        numero--;
        imprimirDecrescente(numero);
    }
    return 0;
}
