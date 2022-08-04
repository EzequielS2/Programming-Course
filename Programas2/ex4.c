#include<stdio.h>

int main()
{
	int x[3][5], somaLinha[3], l, c;
	for(l=0; l<3; l++)
	{
		for(c=0; c<5; c++)
		{
			printf("\nDigite um numero: ");
			scanf("%d", &x[l][c]);
		}
	}
	printf("\n\nMatriz X: \n\n");
	for(l=0; l<3; l++)
	{
		for(c=0; c<5; c++)
		{
			printf("%d\t", x[l][c]);
		}
		printf("\n");
	}
	printf("\nMatriz Soma linha: \n\n");
	for(l=0; l<3; l++)
	{	
		somaLinha[l]=0;
		for(c=0; c<5; c++)
		{
			somaLinha[l]=somaLinha[l]+x[l][c];
		}
		printf("%d", somaLinha[l]);
		printf("\n");
	}
}