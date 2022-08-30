/*
	FPR - Fundamentos de Programa��op
	Professor Leonardo Vianna
	2022/2						Turma: Manh�
	Data: 25/08/2022
	
	Exemplo 4: uso da fun��o strcmp
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
int strComparar (char string1[], char string2[]);

//main
void main ()
{
	//declara��o de vari�veis
	char s1[30], s2[30];
	int retorno;
		
	//leitura das strings
	printf ("Entre com a primeira string: ");
	fflush (stdin);
	gets (s1);
	
	printf ("\nEntre com a segunda string: ");
	fflush (stdin);
	gets (s2);
	
	//exibindo as duas strings
	printf ("\nExibindo as duas strings:");
	printf ("\ns1: %s", s1);
	printf ("\ns2: %s", s2);
	
	//verificando se as strings s�o iguais ou n�o
	retorno = strComparar (s1, s2);
	if (retorno == 0)
	{
		printf ("\n\nAs strings %s e %s sao iguais!", s1, s2);
	}
	else
	{
		printf ("\n\nAs strings %s e %s nao sao iguais!", s1, s2);
		printf (" (retorno = %d)", retorno);
	}
}	

//implementa��o das fun��es
int strComparar (char string1[], char string2[])
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo as strings
	for (i=0;(string1[i]==string2[i])&&(string1[i])&&(string2[i]);i++);

	//retornando o resultado
	//if ((string1[i] == '\0') && (string2[i] == '\0'))
	if (string1[i] == string2[i])
	{
		return 0;
	}
	else
	{
		if (string1[i] > string2[i])
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
}
