/*
Quest�o 01:
Suponha que n�o existissem as fun��es strlen,
strcpy, strcat e strcmp. Pede-se, ent�o, a
implementa��o de fun��es que tenham o
mesmo objetivo daquelas.

*/

//Exemplo 1: uso da fun��o strlen

//importa��o de bibliotecas
#include <stdio.h>
//#include <string.h>

//prot�tipos das fun��es
int strTamanho (char s[]);

//main
void main ()
{
	//declara��o de vari�veis
	char s[30];
	int quant;
	
	//leitura da string
	printf ("Entre com uma string: ");
	fflush (stdin);
	gets (s);
	
	//chamando a fun��o strlen
	quant = strTamanho (s);
	
	//exibindo o resultado
	printf ("\n\nA string %s possui %d caracteres!", s, quant);	
}

//implementa��o das fun��es
int strTamanho (char s[])
{
	//declara��o de vari�veis
	int i;//, cont = 0;
	
	//percorrendo toda a string
	for (i=0;s[i]/*!='\0'*/;i++);
	//{
		//cont++;
	//}
	
	//retornando o resultado
	return i;//cont;
}
