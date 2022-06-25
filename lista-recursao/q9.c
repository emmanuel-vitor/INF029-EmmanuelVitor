#include <stdio.h>
#include <stdlib.h>

int multiplicacao_Rec();

int main(){
    int n1,n2;

    printf("Digite o numero n1: ");
    scanf("%d", & n1);
    getchar();

    printf("Digite o numero n2: ");
    scanf("%d", & n2);
    getchar();    

    printf("Resultado %d", multiplicacao_Rec(n1, n2));

}

int multiplicacao_Rec(int a, int b) {
	if(a == 0 || b == 0) {
		return 0;
	}
	if(b == 1) {
		return a;
	}
	return a + multiplicacao_Rec(a, b - 1);
}