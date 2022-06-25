#include <stdio.h>
#include <stdlib.h>

int fatorial();

int main(void){

    int nFat;

    puts("Informe um número");
    scanf("%d", &nFat);

    printf("%d! = %d\n", nFat,fatorial(nFat));

    return 0;
}

int fatorial(int nFat){

    if(nFat == 1 || nFat==0){
        return 1;
      }else{
    return (nFat * fatorial(nFat - 1));
}
  }

