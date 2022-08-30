/*	
	Exemplo 3: uso da fun��o strcat
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
void strConcatenar (char string1[], char string2[]);
int strTamanho (char s[]);

//main
void main ()
{
	//declara��o de vari�veis
	char s1[30], s2[30];
		
	//leitura das strings
	printf ("Entre com a primeira string: ");
	fflush (stdin);
	gets (s1);
	
	printf ("\nEntre com a segunda string: ");
	fflush (stdin);
	gets (s2);
	
	//exibindo as duas strings antes da concatena��o
	printf ("\nExibindo as duas strings antes da concatenacao:");
	printf ("\ns1: %s", s1);
	printf ("\ns2: %s", s2);
	
	//concatenando as strings
	strConcatenar (s1, s2);
	
	//exibindo as duas strings depois da concatena��o
	printf ("\nExibindo as duas strings depois da concatenacao:");
	printf ("\ns1: %s", s1);
	printf ("\ns2: %s", s2);
}

//implementa��o das fun��es
void strConcatenar (char string1[], char string2[])
{
	//declara��o de vari�veis
	int i, j;
	
	//percorrendo a string2
	for (i=strTamanho(string1),j=0;string2[j];i++,j++)
	{
		string1[i] = string2[j];
	}
	
	//finalizando a string1
	string1[i] = '\0';
}

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
