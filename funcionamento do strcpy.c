/*
	Exemplo 2: uso da função strcpy
*/

//importação de bibliotecas
#include <stdio.h>
//#include <string.h>

//protótipos das funções
void strCopiar (char s1[], char s2[]);

//main
void main ()
{
	//declaração de variáveis
	char origem[30], destino[30];
		
	//leitura da string
	printf ("Entre com uma string: ");
	fflush (stdin);
	gets (origem);
	
	//exibindo as duas strings antes da cópia
	printf ("\nExibindo as duas strings antes da copia:");
	printf ("\norigem: %s", origem);
	printf ("\ndestino: %s", destino);
	
	//copiando a string origem para destino
	strCopiar (destino, origem);
	
	//exibindo as duas strings depois da cópia
	printf ("\n\nExibindo as duas strings depois da copia:");
	printf ("\norigem: %s", origem);
	printf ("\ndestino: %s", destino);
}

//implementação das funções
void strCopiar (char s1[], char s2[])
{
	//declaração de variáveis
	int i;
	
	//percorrendo s2
	for (i=0;s2[i];i++)
	{
		s1[i] = s2[i];
	}
	//finalizando a string s1 com '\0'
	s1[i] = '\0';
}
