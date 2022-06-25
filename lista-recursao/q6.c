#include<stdio.h>

int calcularExponencial();


int main(void){

	int k;
	int n;

	printf("Informe um número base k e um expoente n:\n");
	scanf("%d", &k);
	scanf("%d", &n);

	int resultado = calcularExponencial(k, n);

	printf("\n");
	printf("%d elevado a %d == %d", k, n, resultado);

	return 0;

}


int calcularExponencial(int k, int n){

	if(n > 0){

		return k * calcularExponencial(k, n - 1);

	}else{

		return 1;

	}

}