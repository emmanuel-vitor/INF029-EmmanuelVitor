#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME 255
#define MAX_CPF 15

typedef struct nascimento{
    int dia;
    int mes;
    int ano;
} Nascimento;
 

typedef struct pessoa{
    char nome[MAX_NOME];
    Nascimento nascimento;
    char sexo;
    char cpf[MAX_CPF];
} Pessoa;

Pessoa cadastroCliente();
int validarNome(Pessoa pessoa);
int validarSexo(Pessoa pessoa);
int validarCPF(Pessoa pessoa);
int validarNascimento(Pessoa pessoa);

int main(){

    Pessoa pessoa = cadastroCliente();

        if(!validarNome(pessoa)){
            printf("o nome precisa ter ate 20 caracter");
        }else if(!validarSexo(pessoa)){
            printf("digite um sexo Valido");
        }else if(!validarCPF(pessoa)){
            printf("Digite um cpf valido");
        }else if(!validarNascimento(pessoa)){
            printf("Digite uma data de nascimento valida");
        }else{
            
            printf("----------------------------------\n"); 
            printf("Cadastro\n");   
            printf("----------------------------------\n");

            printf("nome: %s\n", pessoa.nome);
            printf("Data de nascimento: %d / %d / %d\n",
            pessoa.nascimento.dia,
            pessoa.nascimento.mes,
            pessoa.nascimento.ano);
            printf("Sexo: %c\n", pessoa.sexo);
            printf("CPF: %s\n", pessoa.cpf);
            printf("----------------------------------\n");
        }
   

    return 0;
}

Pessoa cadastroCliente(){
    Pessoa cadastro;
    printf("----------------------------------\n");
    printf("Cadastro\n");
    printf("----------------------------------\n");

    printf("digite seu nome: ");
    fgets(cadastro.nome,MAX_NOME,stdin);

    size_t ln = strlen(cadastro.nome) - 1;
    if (cadastro.nome[ln] == '\n')
        cadastro.nome[ln] = '\0';    

    printf("digite sua data de nascimento(## ## ####): ");
    scanf("%d %d %d",
    & cadastro.nascimento.dia,
    & cadastro.nascimento.mes,
    & cadastro.nascimento.ano);

    getchar();

    printf("digite seu sexo: ");
    scanf("%c",& cadastro.sexo);

    getchar();

    printf("digite seu cpf(###.###.###-##): ");
    fgets(cadastro.cpf,MAX_CPF,stdin);
    ln = strlen(cadastro.cpf) - 1;
    if (cadastro.cpf[ln] == '\n')
        cadastro.cpf[ln] = '\0';  

    return cadastro;     
}

int validarNome(Pessoa pessoa){

    size_t ln = strlen(pessoa.nome);

    if(ln > 20 ){
        return 0;
    }else{
        return 1;
    }
}

int validarSexo(Pessoa pessoa){
    if(pessoa.sexo == 'm' || pessoa.sexo == 'M' ||
        pessoa.sexo == 'f' || pessoa.sexo == 'F'){
            return 1;
    }else{
        return 0;

    }
}

int validarCPF(Pessoa pessoa){
    
    if(strlen(pessoa.cpf) == 14){
 
        for(int i = 0; i < strlen(pessoa.cpf) ; i++){
            
            if(i != 3 && i!=7 && i!=11 ){
                if(!isdigit(pessoa.cpf[i])) return 0;
            }else if(i == 3 || i==7){
                    if(!(pessoa.cpf[i] == '.'))return 0;
            }else if(i == 11){
                if(!(pessoa.cpf[i] == '-')) return 0;
            }
        }
        return 1;        
    }else{
       return 0; 
    } 
}

int validarNascimento(Pessoa pessoa){


    if(pessoa.nascimento.ano < 0){
        return 0;
    }else if(pessoa.nascimento.mes< 0 || pessoa.nascimento.mes>12){
        return 0;
    }else if(pessoa.nascimento.dia<0 || pessoa.nascimento.dia>31){
        return 0;
    }else{
        return 1;
    }

}
