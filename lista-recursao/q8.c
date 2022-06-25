
#include <stdio.h>
#include <stdlib.h>
int calcularMdc();
int main(){

    int n1, n2, result;

    printf("insira um num: \n");
    scanf("%d", &n1);

    printf("insira um outro num: \n");
    scanf("%d", &n2);

    result = calcularMdc(n1, n2);

    printf("\n %d \n", result);

}

int calcularMdc(int x, int y){

    if (x%y == 0){
        return y;
    }
    else
    {
        return calcularMdc(y,x % y);
    }
}
