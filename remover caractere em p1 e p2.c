/*
Questão 04:
Desenvolver uma função que remova de uma
string s os caracteres compreendidos entre as
posições p1 e p2.
Caso p1 ou p2 seja uma posição inválida, a
função deverá retornar o valor 0 e a remoção de
caracteres solicitada não será realizada; caso
contrário, deverá retornar 1 e proceder com o
que foi pedido.
*/
#include <stdio.h>
#include <string.h>

int stringremovep1p2(char s[], int p1, int p2);

void main()
{
	char string[20];
	int pos1, pos2, retorno;
	
	printf("Entre: ");
	fflush(stdin);
	gets(string);
	
	printf("String antes da remocao: %s\n", string);
	
	printf("Entre com a primeira posicao: ");
	scanf("%d", &pos1);
	
	printf("Entre com a segunda posicao: ");
	scanf("%d", &pos2);
	
	retorno = stringremovep1p2(string, pos1, pos2);
	
	if(retorno == 0)
	{
		printf("Posicao invalida!\n");
	}
	else
		{
			if(retorno == 1)
			{
				printf("Posicao valida!\n");
				printf("\n");
				printf("String depois da remocao: %s\n", string);		
			}
				
		}
	
	
}

int stringremovep1p2(char s[], int p1, int p2)
{
	int i, j, k;
	int quant;
	j = 0;
	quant = strlen(s);
		
	for(i = 0; s[i]; i++)
	{
		if((p1 < 0 || p1 > s[i]) || (p2 < 0 || p2 > s[i]))
		{
			return 0;
		}
		else
			{
				if(i >= p1 && i <= p2)
				{
					for(j = i; j <= quant; j++)
					{
						s[p1] = s[p2+1];
						p1++;
						p2++;
					
					}	
					i--;
			
				}		
			}
	}
	return 1;
}

