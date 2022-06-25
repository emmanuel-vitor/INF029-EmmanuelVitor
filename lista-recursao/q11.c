#include <stdio.h>
#include <stdlib.h>

int multiplicacao();
int main(){

    int n1=5, n2=4;
    int result;

    result=multiplicacao(n1,n2);

    printf("A o resultado é: %d\n", result);


}

int multiplicacao(int x, int y){

    if(y==1)
        return x;
    else
    {
        return x+multiplicacao(x, --y);
    }

}
