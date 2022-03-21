#include<stdio.h>
#include<stdlib.h>
#define TAM_MAX_ALUNO 1
#define TAM_MAX_PROFESSOR 1

// definicção de tamanho de vetor de cadastro de alunos
typedef struct {
int dia;
int mes;
int ano;
} dtNascimento; //Struct Data de Nascimento

typedef struct {
char nome[40];
int matricula;
char sexo;
dtNascimento dataDeNascimento;
int cpf;
} Aluno; // criação de struct com informações de alunos

Aluno cadastroAluno[TAM_MAX_ALUNO];//vetor de cadastro de alunos
typedef struct {
char nome[40];
int matricula;
char sexo;
dtNascimento dataDeNascimento;
int cpf;
} Professor; // criação de struct com informações de Professor

Aluno cadastroProfessor[TAM_MAX_ALUNO]; //vetor de cadastro de alunos


// função de cadastro de alunos
int cadastrandoAluno(void){
  for (int i=0; i<TAM_MAX_ALUNO;i++){
    setbuf(stdin, NULL); //limpar BUFFER do teclado

    printf("\n******************************\n");   
    printf("* Efetuando cadastro aluno %d *\n",i);
    printf("******************************\n\n");
    
    printf("Digite o nome do aluno:");
    fgets(cadastroAluno[i].nome, 40, stdin);
    
    printf("Digite a matricula do aluno:");
    scanf("%d",&cadastroAluno[i].matricula);
    
    printf("Digite a data de nascimento do aluno ex(01 03 1999):");            
    scanf("\n%d%d%d",&cadastroAluno[i].dataDeNascimento.dia
                  ,&cadastroAluno[i].dataDeNascimento.mes
                  ,&cadastroAluno[i].dataDeNascimento.ano);
    
    printf("Digite o sexo do aluno ('F = feminino, M=masculino'):");
    scanf("\n%c",&cadastroAluno[i].sexo);

    printf("Digite o CPF do aluno:");
    scanf("%d",&cadastroAluno[i].cpf);
    }
  }

// função de cadastro de Professor
int cadastrandoProfessor(void){
  for (int i=0; i<TAM_MAX_PROFESSOR;i++){
    setbuf(stdin, NULL); //limpar BUFFER do teclado

    printf("\n******************************\n");   
    printf("* Efetuando cadastro Professor %d *\n",i);
    printf("******************************\n\n");
    
    printf("Digite o nome do Professor:");
    fgets(cadastroProfessor[i].nome, 40, stdin);
    
    printf("Digite a matricula do Professor:");
    scanf("%d",&cadastroProfessor[i].matricula);
    
    printf("Digite a data de nascimento do Professor ex(01 03 1999):");            
    scanf("\n%d%d%d",&cadastroProfessor[i].dataDeNascimento.dia
                  ,&cadastroProfessor[i].dataDeNascimento.mes
                  ,&cadastroProfessor[i].dataDeNascimento.ano);
    
    printf("Digite o sexo do Professor ('F = feminino, M=masculino'):");
    scanf("\n%c",&cadastroProfessor[i].sexo);

    printf("Digite o CPF do Professor:");
    scanf("%d",&cadastroProfessor[i].cpf);
    }
  }

// Listando Alunos
void listandoAluno(void){
  for (int i=0; i<TAM_MAX_ALUNO;i++){
    printf("%s",cadastroAluno[i].nome);
    printf("%d",cadastroAluno[i].matricula);
    printf("%d/%d/%d",cadastroAluno[i].dataDeNascimento.dia
                     ,cadastroAluno[i].dataDeNascimento.mes
                     ,cadastroAluno[i].dataDeNascimento.ano);
    printf("%c",cadastroAluno[i].sexo);
    printf("%d",cadastroAluno[i].cpf);
  }
}

// Listando Professores
void listandoAluno(void){
  for (int i=0; i<TAM_MAX_PROFESSOR;i++){
    printf("%s",cadastroProfessor[i][i].nome);
    printf("%d",cadastroProfessor[i].matricula);
    printf("%d/%d/%d",cadastroProfessor[i].dataDeNascimento.dia
                     ,cadastroProfessor[i].dataDeNascimento.mes
                     ,cadastroProfessor[i].dataDeNascimento.ano);
    printf("%c",cadastroProfessor[i].sexo);
    printf("%d",cadastroProfessor[i].cpf);
  }
}


int main(){
  cadastrandoAluno();
  cadastrandoProfessor();
}