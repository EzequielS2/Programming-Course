#include<stdio.h>

int main()
{
	int A[3][5], l, c, n, somaColuna[]={0,0,0,0,0};
	for(l=0; l<3; l++)
	{
		for(c=0; c<5; c++)
		{
			printf("Digite um numero: ");
			scanf("%d", &A[l][c]);
		}
	}
	printf("Matriz A: \n\n");
	for(l=0; l<3; l++)
	{
		for(c=0; c<5; c++)
		{
			printf("%d\t", A[l][c]);
		}
		printf("\n");
	}
	for(l=0; l<3; l++)
	{	n=0;
		for(c=0; c<5; c++)
		{
			somaColuna[n]=somaColuna[n]+A[l][c];
			n++;
		}
	}
	printf("MAtriz soma de coluna: \n\n");
	for(n=0; n<5; n++)
	{
		printf("%d\t", somaColuna[n]);
	}	
}