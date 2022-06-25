#include<stdio.h>

int somatorio();

int main(){

	int numero;

	printf("Insira um numero:\n");
	scanf("%d", &numero);

	int result = somatorio(numero);

	printf("\n");
	printf("o Somatorio de 1 até %d = %d\n",numero, result);
  
	return 0;
}

int somatorio(int numero){

	if(numero > 0){

		return numero + somatorio(numero - 1);

	}else{

		return 0;
	}
}

