#include<stdio.h>

int digitos(int a);

int main()
{
	int n;
	while(n>0)
	{
		printf("\n\nDigite um numero: ");
		scanf("%d", &n);
		printf("\nDigitos do numero: %d", digitos(n));
	}
}

int digitos(int a)
{
	int quant=0;
	while(a>0)
	{
		a=a/10;
		quant++;
	}
	return(quant);
}
	