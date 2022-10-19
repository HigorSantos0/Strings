/*
Questão 01:
Implementar uma função que, dada uma string
s, determine a quantidade de caracteres
distintos em s.
*/
#include<stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

int quantdistintons(char string[]);

void main()
{
	char s[20];
	int resp;
	
	printf("Entre com a string: ");
	fflush(stdin);
	gets(s);
	
	resp = quantdistintons(s);
	
	printf("quantidade de distintos = %d\n", resp);
}

int quantdistintons(char string[])
{
	int i, j, cont = 0, retorno;
	
	for(i = 0; string[i] ; i++)
	{
		retorno = FALSE;
		
		for(j = 0; j < i; j++)
		{
			if(string[i] == string[j])
			{
				retorno = TRUE;
				break;
			}		
		}
		if(retorno == FALSE)
		{
			cont++;
		}
		
	}
	return cont;
}

