#include<stdio.h>

int soma();
	int nAtual = 0;
	int somatorio = 0;

int main(void){

	int tamVetor = 0;

	printf("Digite o tamanho do vetor:");
	scanf("%d", &tamVetor);

	int vetorDeInteiros[tamVetor];

	printf("Digite os valores:\n");
	for(int i = 0; i < tamVetor; i++){
		scanf("%d", &vetorDeInteiros[i]);
	}

	soma(vetorDeInteiros, nAtual, tamVetor, somatorio);
	return 0;
}


int soma(int vetorDeInteiros[], int nAtual, int tamVetor, int somatorio){

	if(nAtual == tamVetor)
		return printf("Soma dos elementos do array = %d",somatorio);

	somatorio = somatorio + vetorDeInteiros[nAtual];

	nAtual++;

	soma(vetorDeInteiros, nAtual, tamVetor, somatorio);
}

