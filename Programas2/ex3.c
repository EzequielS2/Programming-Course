#include<stdio.h>
#define linha 5
#define coluna 5

int main()
{
	int x[linha][coluna], y[linha][coluna], diferenca[linha][coluna], l, c;
	for(l=0; l<linha; l++)
	{
		for(c=0; c<coluna; c++)
		{
			printf("\nDigite um numero: ");
			scanf("%d", &x[l][c]);
			printf("\nDigite outro numero: ");
			scanf("%d", &y[l][c]);
		}
	}
	for(l=0; l<linha; l++)
	{
		for(c=0; c<coluna; c++)
		{
			diferenca[l][c]=x[l][c]-y[l][c];
		}
	}
	printf("\nMatriz X:\n ");
	for(l=0; l<linha; l++)
	{
		for(c=0; c<coluna; c++)
		{
			printf("%d\t", x[l][c]);
		}
		printf("\n");
	}
	printf("\nMatriz Y: \n");
	for(l=0; l<linha; l++)
	{
		for(c=0; c<coluna; c++)
		{
			printf("%d\t", y[l][c]);
		}
		printf("\n");
	}
	printf("\nMatriz diferenca: \n");
	for(l=0; l<linha; l++)
	{
		for(c=0; c<coluna; c++)
		{
			printf("%d\t", diferenca[l][c]);
		}
		printf("\n");
	}
}





