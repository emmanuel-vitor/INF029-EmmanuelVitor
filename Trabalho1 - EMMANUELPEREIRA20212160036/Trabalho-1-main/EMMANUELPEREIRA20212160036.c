// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome:
//  email:
//  Matrícula:
//  Semestre:

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 07/05/2021 - 19/08/2016

// #################################################

#include <stdlib.h>
#include "EMMANUELPEREIRA20212160036.h" // Substitua pelo seu arquivo de header renomeado
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
/*
## função utilizada para testes  ##

 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
int somar(int x, int y)
{
    int soma;
    soma = x + y;
    return soma;
}

/*
## função utilizada para testes  ##

 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x)
{ //função utilizada para testes
  int i, fat = 1;
    
  for (i = x; i > 1; i--)
    fat = fat * i;
    
  return fat;
}

int teste(int a)
{
    int val;
    if (a == 2)
        val = 3;
    else
        val = 4;

    return val;
}



DataQuebrada quebraData(char data[]){
  DataQuebrada dq;
  char sDia[3];
	char sMes[3];
	char sAno[5];
	int i; 

	for (i = 0; data[i] != '/'; i++){
		sDia[i] = data[i];	
	}
	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sDia[i] = '\0';  // coloca o barra zero no final
	}else {
		dq.valido = 0;
    return dq;
  }  
	

	int j = i + 1; //anda 1 cada para pular a barra
	i = 0;

	for (; data[j] != '/'; j++){
		sMes[i] = data[j];
		i++;
	}

	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sMes[i] = '\0';  // coloca o barra zero no final
	}else {
		dq.valido = 0;
    return dq;
  }
	

	j = j + 1; //anda 1 cada para pular a barra
	i = 0;
	
	for(; data[j] != '\0'; j++){
	 	sAno[i] = data[j];
	 	i++;
	}

	if(i == 2 || i == 4){ // testa se tem 2 ou 4 digitos
		sAno[i] = '\0';  // coloca o barra zero no final
	}else {
		dq.valido = 0;
    return dq;
  }

  dq.iDia = atoi(sDia);
  dq.iMes = atoi(sMes);
  dq.iAno = atoi(sAno); 

	dq.valido = 1;
    
  return dq;
}
/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 @restrições
    Não utilizar funções próprias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
 */
int q1(char data[])
{
    //quebrar a string data em strings sDia, sMes, sAno

  //DataQuebrada dataQuebrada = quebraData(data);
  //if (dataQuebrada.valido == 0) return 0;

  //printf("%s\n", data);
  
    int datavalida = 1;

    DataQuebrada dq;

    dq = quebraData(data);

    if (dq.iAno >= 0 && dq.iAno < 10000)
    {
        if (dq.iMes >= 1 && dq.iMes <=12) 
        {
            if ( (dq.iDia >= 1 &&  dq.iDia <=31) && dq.iMes == 1 || dq.iMes == 3 || dq.iMes == 5 || dq.iMes == 7 || dq.iMes == 8 || dq.iMes == 10 || dq.iMes == 12) {
                datavalida = 1;
            }
            else if ((dq.iDia >= 1 && dq.iDia < 31) && dq.iMes == 4 || dq.iMes == 6 || dq.iMes == 9 || dq.iMes == 11)
            {
                datavalida = 1;
            }
            else if (dq.iDia >= 1 && dq.iDia < 29 && dq.iMes == 2)
            {
                datavalida = 1;
            }
            else if ((dq.iDia == 29 && dq.iMes == 2) && (dq.iAno % 4 == 0 && dq.iAno % 100 != 0)|| dq.iAno % 400 == 0)
            {
                datavalida = 1;
            }
            else
            {
                datavalida = 0;
            }        
                        
        }
        else
        {
            datavalida = 0;
        }
    }

    if (datavalida)
        return 1;
    else
        return 0;


}



/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. 
 @saida
    Retorna um tipo DiasMesesAnos. No atributo retorno, deve ter os possíveis valores abaixo
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
    Caso o cálculo esteja correto, os atributos qtdDias, qtdMeses e qtdAnos devem ser preenchidos com os valores correspondentes.
 */
DiasMesesAnos q2(char datainicial[], char datafinal[])
{

    //calcule os dados e armazene nas três variáveis a seguir
    DiasMesesAnos dma;

    if (q1(datainicial) == 0){
      dma.retorno = 2;
      return dma;
    }else if (q1(datafinal) == 0){
      dma.retorno = 3;
      return dma;
    }else{
      //verifique se a data final não é menor que a data inicial
      
      //calcule a distancia entre as datas


      //se tudo der certo
      dma.retorno = 1;
      return dma;
      
    }
    
}

/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */
int q3(char *texto, char c, int isCaseSensitive){
    char stringMinusculo[250], stringMaiusculo[250];
    int qtdOcorrencias=0, i;

    if(isCaseSensitive == 1){

        for(i=0; i<strlen(texto); i++){
            if(c == texto[i]){
                qtdOcorrencias++;
            }
        }
    }
    else{

        for(i=0; i<strlen(texto); i++){
            stringMinusculo[i] = texto[i] + 32;
	}
        for(i=0; i<strlen(texto); i++){
	    stringMaiusculo[i] = texto[i] - 32;
        }
        for(i=0; i<strlen(texto); i++){
            if(c == stringMinusculo[i] || c == stringMaiusculo[i] || c == texto[i]){
                qtdOcorrencias++;
            }
        }
    }
    return qtdOcorrencias;
}

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;

 */

int q4(char *strTexto, char *strBusca,int *posicoes){

    int posicao = 0, teste, acento =0, aux=0;

    
    for(int i = 0; i< strlen(strTexto) ; i++){
        
        teste = 1;

        if(strTexto[i] ==-61){
            acento ++;
        }

        if(strTexto[i] == strBusca[0]){
            for(int j = 1 ; strBusca[j] !='\0' && teste; j++ ){

                if(strTexto[i+j] != strBusca[j]){
                    teste =0;
                }
            }


            if(teste){
                posicoes[posicao] = i+1-acento;
                posicao++;
                posicoes[posicao] = i+strlen(strBusca)-acento;
                posicao++;
                i += strlen(strBusca) -1;
            }
        }

    }

    return posicao/2;
}
/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */


int q5(int num){
    int inverso=0;
    int mi, cm, dm, m, c, d, u;

    if(num >= 1000000 && num <= 9999999){

        mi = num/1000000;
        cm = ((num%1000000)/100000)*10;
        dm = ((num%100000)/10000)*100;
        m = ((num%10000)/1000)*1000;
        c = ((num%1000)/100)*10000;
        d = ((num%100)/10)*100000;
        u = (num%10)*1000000;

        inverso = mi + cm + dm + m + c + d + u;
    }
    else if(num >= 100000 && num <= 999999){

        cm = num/100000;
        dm = ((num%100000)/10000)*10;
        m = ((num%10000)/1000)*100;
        c = ((num%1000)/100)*1000;
        d = ((num%100)/10)*10000;
        u = (num%10)*100000;

        inverso = cm + dm + m + c + d + u;
    }
    else if(num >= 10000 && num <= 99999){

        dm = num/10000;
        m = ((num%10000)/1000)*10;
        c = ((num%1000)/100)*100;
        d = ((num%100)/10)*1000;
        u = (num%10)*10000;

        inverso = dm + m + c + d + u;
    }
    else if(num >= 1000 && num <= 9999){

        m = num/1000;
        c = ((num%100)*10);
        d = ((num%100)/10)*100;
        u = (num%10)*1000;

        inverso = m + c + d + u;
    }
    else if(num >= 100 && num <= 999){

        c = num/100;
        d = ((num%100)/10)*10;
        u = (num%10)*100;

        inverso = c + d + u;
    }
    else if(num >= 10 && num <= 99){

        d = num/10;
        u = (num%10)*10;

        inverso = d + u;
    }
    else if(num >= 0 && num <= 9){

        inverso = num;
    }
    return inverso;
}


/*
 Q6 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */



int q6(int numerobase, int numerobusca){
    int qtdOcorrencias = 0;
    int base[100];
    int busca[100];
    int contbase = 0, i= 0, j = 0, controle = 0, contbusca = 0;

	while(numerobase >= 0){
		if(numerobase < 10 && numerobase >= 0 ){
			base[contbase] = numerobase;
			break;
		}
		else{
			base[contbase] = numerobase % 10;
			numerobase = numerobase / 10;
			contbase++;
		}
	}
	while(numerobusca >= 0){
		if(numerobusca < 10 && numerobase >= 0){
			busca[contbusca] = numerobusca;
			break;
		}
		else{
			busca[contbusca] = numerobusca % 10;
			numerobusca = numerobusca / 10;
			contbusca++;
		}
	}
	for (i = 0; i <= contbase; i++){
		if(contbusca == 0){
			if (busca[0] == base[i]){
				qtdOcorrencias++;
			}
		}
		else{
			if(busca[j] == base[i]){
				controle = 1;
				j++;
			}
			else if (busca[j] != base[i]){
				controle = 0;
				j = 0;
			}
			if(controle == 1 && j == contbusca){
				controle = 0;
				j = 0;
				qtdOcorrencias++;
			}
		}
	}
    return qtdOcorrencias;
}





