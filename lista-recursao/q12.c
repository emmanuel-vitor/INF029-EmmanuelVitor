#include <stdio.h>
int imprimirCrescente();

int numeroInicial=0, numeroFinal;
int main()
{
    
   imprimirCrescente(numeroInicial,111);
   
    return 0;
}

int imprimirCrescente(int numeroInicial, int numeroFinal){
    
    if(numeroInicial<=numeroFinal ){
        printf("Numero: %d\n ",numeroInicial);
        numeroInicial++;
        imprimirCrescente( numeroInicial, numeroFinal);
    }
    return 0;
}
