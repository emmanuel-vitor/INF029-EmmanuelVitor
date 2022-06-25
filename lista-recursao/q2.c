#include<stdio.h>

int fibonacci();

int main(){

	int numero;

	printf("Quantos termos deseja visualizar?");
	scanf("%d", &numero);

	int i = 0;
	printf("%d ", i);

	for(i = 0; i < numero - 1; i++){

		printf("%d ", fibonacci(i + 1));

	}
        	
	getchar();
	printf("\n");

	return 0;

}


int fibonacci(int numero){

	if (numero <= 1)
		return numero;
	return fibonacci(numero - 1) + fibonacci(numero - 2);

}
