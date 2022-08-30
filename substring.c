#include <stdio.h>
#include <string.h>

/*
Desenvolver uma função que, dada uma string
s, crie uma substring que inicie na posição p de
s e contenha n caracteres.
Observações: se p e/ou n forem inválidos, a
substring será vazia; ii) se s não possuir n
caracteres além de p, a substring a ser criada
começará em p e terminará no final de s.
*/

void stringsub(char string1[], char substring[], int p);

void main()
{
	char s[5], sub[5];
	int pos, quant;
	
	printf("Entre com a string: ");
	fflush(stdin);
	gets(s);
	
	printf("Entre com a posicao q a string 2 ira começar: ");
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

