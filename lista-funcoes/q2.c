

int subtrair(int primeiroNumero, int segundoNumero, int terceiroNumero){
  return primeiroNumero-segundoNumero-terceiroNumero;
}
 int main(){
   int primeiroNumero, segundoNumero, terceiroNumero;
   
   printf("Digite o Primeiro Numero: ");
   scanf("\n%d",&primeiroNumero);
   printf("Digite o Segundo Numero: ");
   scanf("\n%d",&segundoNumero);
   printf("Digite o Terceiro Numero: ");
   scanf("\n%d",&terceiroNumero);
   printf("\n %d",subtrair(primeiroNumero,segundoNumero,terceiroNumero)); 
   
   return 0;
 }