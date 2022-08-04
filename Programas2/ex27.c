#include<stdio.h>

int main()
{
	int a[4][4], l, c, i;
	for(l=0; l<4; l++)
	{
		for(c=0; c<4; c++)
		{
			printf("\nDigite um numero: ");
			scanf("%d", &a[l][c]);
		}
	}
	printf("\nMatriz original: \n\n");
	for(l=0; l<4; l++)
	{
		for(c=0; c<4; c++)
		{
			printf("%d\t", a[l][c]);
		}
		printf("\n");
	}
	for(i=0; i<4; i++)
	{
		l=0;
		c=3;
		a[l][i]=a[i][c];
	}
	printf("\nMatriz modificada: \n\n");
	for(l=0; l<4; l++)
	{
		for(c=0; c<4; c++)
		{
			printf("%d\t", a[l][c]);
		}
		printf("\n");
	}
}

