#include <stdio.h>
#include <string.h>

/*
Desenvolver uma fun��o que, dada uma string
s, crie uma substring que inicie na posi��o p de
s e contenha n caracteres.
Observa��es: se p e/ou n forem inv�lidos, a
substring ser� vazia; ii) se s n�o possuir n
caracteres al�m de p, a substring a ser criada
come�ar� em p e terminar� no final de s.
*/

void stringsub(char string1[], char substring[], int p);

void main()
{
	char s[5], sub[5];
	int pos, quant;
	
	printf("Entre com a string: ");
	fflush(stdin);
	gets(s);
	
	printf("Entre com a posicao q a string 2 ira come�ar: ");
    scanf("%d", &pos);
	
	printf("String1 %s \n", s);
	printf("substring %s \n", sub);
	
	quant = strlen(s);
	
	if (pos < quant)
	{
		stringsub(s, sub, pos);
	
		printf("String1 %s \n", s);
		printf("substring %s \n", sub);	
	}
	else
		{
			printf("String vazia!");
			
			printf("String1 %s \n", s);
			printf("substring %s \n", sub);	
		}
	
	
}
void stringsub(char string1[], char substring[], int p)
{
	int i, quant, j;
	
	quant = strlen(string1);

	for(i = p, j = 0;i < quant;i++, j++)
	{
		substring[j] = string1[i];
	}
	
	
}

