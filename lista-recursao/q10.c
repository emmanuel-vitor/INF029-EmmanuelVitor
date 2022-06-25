#include <stdio.h>
#include <stdlib.h>
int encontrarRepeticao();

int main(){

    int contNumero;
    int numero;
    int nRepetido;

    printf("numero: \n");
    scanf("%d", &numero);

    printf("numero que sera avaliado: \n");
    scanf("%d", &nRepetido);

    contNumero = encontrarRepeticao(numero, nRepetido);

    printf("O numero foi repetido %d vezes \n", contNumero);

}


int encontrarRepeticao(int numero, int nRepetido){

    if (numero==0)
        return 0;
    else
    {
        return encontrarRepeticao(numero/10, nRepetido)+(numero%10==nRepetido);
    }

}

