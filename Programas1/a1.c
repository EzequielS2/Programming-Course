#include<stdio.h>
#include<string.h>

int main()
{	int i;
	char x[100], letra1, letra2;
	printf("\nDigite uma string: ");
	gets(x);
	printf("Digite uma letra: ");
	scanf("%c", &letra1);
	fgetc(stdin);
	printf("Digite outra letra: ");
	scanf("%c", &letra2);
	for(i=0; i<strlen(x); i++)
	{	if(x[i]==letra1)
		{	x[i]=letra2;
		}
	}
	printf("\n%s", x);
}