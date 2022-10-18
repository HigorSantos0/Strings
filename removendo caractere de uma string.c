#include <string.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0


void apagarCaractere(char s[], char ch);

void main()
{
	char s[20], ch;
	
	printf("Entre com a palavra desejada: ");
	fflush(stdin);
	gets(s);
	
	printf("Qual caractere deseja remover? ");
	scanf("%c", &ch);
	
	apagarCaractere(s, ch);
	
	printf("Exibindo String: %s\n", s);
	
	
}
void apagarCaractere(char s[], char ch)
{
	int i, j, quant; 
	
	quant = strlen(s);
	
	for(i = 0; s[i]; i++)
	{
		
		if(s[i] == ch)
		{
			for(j = i; j < quant; j++)
			{
				s[i] = s[j+1];
				i++;
				
			}

			
		}
	}
	
}


