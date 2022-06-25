
#include <stdio.h>
#include <stdlib.h>

void imprimirCrescentePar();

int main(void){

    int numeroLimite;

    printf("Informe um número:");
    scanf("%d", &numeroLimite);

    imprimirCrescentePar(numeroLimite);

    return 0;
}

void imprimirCrescentePar(int numeroLimite){

    if(n >= 0){
    	imprimirCrescentePar(numeroLimite - 1);
    	if(numeroLimite % 2 == 0)
    		printf("%d ", numeroLimite);

    }

}

