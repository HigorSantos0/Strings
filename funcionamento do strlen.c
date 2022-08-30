/*
Questão 01:
Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas.

*/

//Exemplo 1: uso da função strlen

//importação de bibliotecas
#include <stdio.h>
//#include <string.h>

//protótipos das funções
int strTamanho (char s[]);

//main
void main ()
{
	//declaração de variáveis
	char s[30];
	int quant;
	
	//leitura da string
	printf ("Entre com uma string: ");
	fflush (stdin);
	gets (s);
	
	//chamando a função strlen
	quant = strTamanho (s);
	
	//exibindo o resultado
	printf ("\n\nA string %s possui %d caracteres!", s, quant);	
}

//implementação das funções
int strTamanho (char s[])
{
	//declaração de variáveis
	int i;//, cont = 0;
	
	//percorrendo toda a string
	for (i=0;s[i]/*!='\0'*/;i++);
	//{
		//cont++;
	//}
	
	//retornando o resultado
	return i;//cont;
}
