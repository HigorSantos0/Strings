/*
	Exemplo 2: uso da fun��o strcpy
*/

//importa��o de bibliotecas
#include <stdio.h>
//#include <string.h>

//prot�tipos das fun��es
void strCopiar (char s1[], char s2[]);

//main
void main ()
{
	//declara��o de vari�veis
	char origem[30], destino[30];
		
	//leitura da string
	printf ("Entre com uma string: ");
	fflush (stdin);
	gets (origem);
	
	//exibindo as duas strings antes da c�pia
	printf ("\nExibindo as duas strings antes da copia:");
	printf ("\norigem: %s", origem);
	printf ("\ndestino: %s", destino);
	
	//copiando a string origem para destino
	strCopiar (destino, origem);
	
	//exibindo as duas strings depois da c�pia
	printf ("\n\nExibindo as duas strings depois da copia:");
	printf ("\norigem: %s", origem);
	printf ("\ndestino: %s", destino);
}

//implementa��o das fun��es
void strCopiar (char s1[], char s2[])
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo s2
	for (i=0;s2[i];i++)
	{
		s1[i] = s2[i];
	}
	//finalizando a string s1 com '\0'
	s1[i] = '\0';
}
