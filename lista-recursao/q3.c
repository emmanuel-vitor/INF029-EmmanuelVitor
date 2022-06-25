
#include<stdio.h>

int inverterNumero();

int inverso = 0;
int digito;

int main(){

	int numero;
	int numeroInvertido;

	printf("Digite um número:\n");
	scanf("%d", &numero);

	numeroInvertido = inverterNumero(numero);

	printf("\n");
	printf("O numero %d invertido fica: %d\n",numero,  numeroInvertido);

	return 0;

}

int inverterNumero(int numero){

	if(numero){

		digito = numero % 10;
		inverso = inverso * 10 + digito;
		inverterNumero(numero / 10);

	}else{

		return inverso;

	}

	return inverso;

}

