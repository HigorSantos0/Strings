/*Quest�o 02:
Dada uma string s, desenvolver uma fun��o
que determine se s � ou n�o um pal�ndromo.
Observa��o: uma string s ser� um pal�ndromo
quando seus caracteres formarem a mesma
sequ�ncia, independente se s � percorrida da
esquerda para direita ou vice-versa.
*/

#include <stdio.h>
#include <string.h>

void main()
{
	char string1[20], stringcontraria[20];
	int i, j, quant, iguais;
	
	printf("Entre com a string: ");
	fflush(stdin);
	gets(string1);
	
	iguais = stringpalindromo(string1);
	
	if(iguais == 0)
	{
		printf("e uma palindromo!");
	}
	else
		{
			printf("Nao e um palindromo!");
		}
}
int stringpalindromo(char string1[])
{
	int i, j, iguais, quant;
	char stringContr[20];
	
	quant = strlen(string1);
	
	for(i = 0, j = quant - 1; i < j; j--, i++)
	{
		if(string1[i] != string1[j])
		{
			return 1;
		}
	}
	
	
	
	return 0;
	
}

