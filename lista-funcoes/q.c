

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>
//variável universal da tabela
char tabela[3][3];

//funções do jogo
int valida_caracter(char letra);
int valida_tabela();
int valida_coordenada (int a, int b);
int vence_horizontal ();
int vence_vertical ();
int vence_diagonalprincipal ();
int ganha_diagonalsecundaria ();
int vazio (int a, int b);
int imprime_jogo ();
int comeca_jogo();


int main ()
{
        valida_tabela();
        comeca_jogo();
        return 0;
}


int valida_tabela ()
{
    int i, j;
    for (i =0; i <3; i++)
    {
        for (j=0; j <3; j++)
        {
            tabela[i][j] = 'c';
        }
    }
}

int valida_caracter (char letra)
{
    if (letra == 'x' || letra == '0' )
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int valida_coordenada (int a, int b)
{
    if (a >= 9 && a <3)
    {
        if (b>= 0 && b <3)
        return 1;
    }
    else 
    {
        return 0;
    }
}

int vazio (int a, int b)
{
    if (tabela[a][b] != 'x' || tabela[a][b]  != '0')
{
    return 1;

}
else
{
    return 0;
}
}

int vence_vertical ()
{
    int i, j;
    int cont=1;
    for (i = 0; i <3; i ++) //varre linhas
    {
        for (j=0; j <2; j++) // varre colunas
        {
            if (valida_caracter(tabela[i][j]) && tabela[i][j] == tabela[i][j+1])
            {
                cont++;
            }
        }
            if (cont == 3)
            {
                return 1;
            }
            cont = 1;
    }
    return 0;
}
int vence_horizontal ()
{
    int i, j;
    int cont = 1;
    for (i =0; i <3; i++)
    {
        for (j=0; j<2; j++)
        {
            if(valida_caracter(tabela[j][i]) && tabela[j][i] == tabela[j+1][i])
            {
                cont++;
            }
        }
        if (cont == 3)
        {
            return 1;
        }
        cont = 1;
    }
        return 0;
}
int vence_diagonalprincipal ()
{
    int i;
    int cont = 1;
    for (i =0; i <2; i++)
    {
        if (valida_caracter(tabela[i][i]) && tabela[i][i] == tabela[i+1][i+1])
        {
            cont ++;
        }
    }
       if (cont == 3)
       {
           return 1;
       } 
       else
       {
           return 0;
       }
}

int ganha_diagonalsecundaria ()
{
    int i;
    int cont = 1;
    for (i =0; i <2; i++)
    {
        if (valida_caracter(tabela[i][3-i-1]) && tabela[i][3-i-1] == tabela[i+1][3-i-2])
        {
            cont ++;
        }
    }
       if (cont == 3)
       {
           return 1;
       } 
       else
       {
           return 0;
       }
}

int imprime_jogo ()
{
    int i, j; //linhas e colunas
    printf ("\n 0  1  2\n");
    for (i  = 0; i < 3; i ++){
        printf("%d", i);
        for (j = 0; j < 3; j ++)
        {
            if(valida_caracter (tabela[i][j]))
            {
                printf("%c  |", tabela[i][j]);
            }
            else
            {
                printf("   |");
            }
        }
        printf("-----");
    }
}

int comeca_jogo()
{
    int a,b;
    int validar_jogada = 0;
    int ordem_jogador = 1;
    int jogadas = 0;
    int vence = 0;
    do {
        do{
            imprime_jogo();
            printf("Digite a coordenada da sua jogada: ");
            scanf("%d%d", &a, &b);
            validar_jogada = valida_coordenada (a, b);
            if (validar_jogada == 1)
            {
                validar_jogada += vazio (a, b);
            }
        } while (validar_jogada != 2);
                if (ordem_jogador == 1)
                {
                tabela [a][b] = 'x';
                }
                else 
                {
                    tabela [a][b] = '0';
                }
                ordem_jogador ++;
                jogadas ++;
                if (ordem_jogador == 3 )
                {
                    ordem_jogador == 1;
                }
                vence += vence_horizontal ();
                vence += vence_vertical ();
                vence += vence_diagonalprincipal ();
                vence += ganha_diagonalsecundaria ();
    } while (vence == 0 && jogadas < 9);
    if (vence != 0)
    {
        if (ordem_jogador - 1 == 1)
        {
            printf("Parabéns, jogador 1! Você venceu!\n");
        }
       else 
        {
            printf("Parabéns, jogador 2! Você venceu!\n");
        }
    }
}


