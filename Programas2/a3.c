#include<stdio.h>
#define tam 30

void palavra(char k[tam], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\n\n%s\n\n", k);
	}
}
int main()
{
	int l;
	char y[tam];
	printf("\nDigite um numero: ");
	scanf("%d", &l);
	printf("Digite uma palvra: ");
	fgetc(stdin);
	gets(y);
	palavra(y, l);
}
	