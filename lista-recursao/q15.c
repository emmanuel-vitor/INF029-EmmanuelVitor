#include <stdio.h>
#include <stdlib.h>

void imprimirDecrescente();

int main(void){

    int numero;

    printf("Informe um número:");
    scanf("%d", &numero);

    imprimirDecrescente(numero);

    return 0;
}
void imprimirDecrescente(int numero){

    if(numero    >= 0){
    	if(numero% 2 == 0)
    		printf("%d ", numero);

    	imprimirDecrescente(numero - 1);
    }
}
