#include<stdio.h>

int main()
{
	int a[6][6], l, c, k;
	for(l=0; l<6; l++)
	{
		for(c=0; c<6; c++)
		{
			printf("\nDigite um numero: ");		
			scanf("%d", &a[l][c]);
		}
	}
	printf("\nMatriz original: \n\n");
	for(l=0; l<6; l++)
	{
		for(c=0; c<6; c++)
		{
			printf("%d\t", a[l][c]);
		}
		printf("\n");
	}
	l=1;
	k=5;
	for(c=0; c<6; c++)
	{
		a[l][c]=a[k][c];
	}
	c=4;
	k=2;
	for(l=0; l<6; l++)
	{
		a[l][k]=a[l][c];
	}
	k=4;
	for(l=0; l<6; l++)
	{
		a[k][l]=a[l][1];
	}
	printf("\nMatriz alterada: \n\n");
	for(l=0; l<6; l++)
	{
		for(c=0; c<6; c++)
		{
			printf("%d\t", a[l][c]);
		}
		printf("\n");
	}
}
		
