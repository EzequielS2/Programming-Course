#include<stdio.h>

int main()
{
	int A[7][7], l, c, primos, i, quant=0;
	for(l=0; l<7; l++)
	{
		for(c=0; c<7;c++)
		{
			printf("\nDigite um numero: ");
			scanf("%d", &A[l][c]);
		}
	}
	printf("\nMatriz A: \n\n");
	for(l=0; l<7; l++)
	{
		for(c=0; c<7; c++)
		{
			printf("%d\t", A[l][c]);
		}
		printf("\n");
	}
	for(l=0; l<7; l++)
	{
		for(i=2; i<A[l][l]; i++)
		{
			if(A[l][l]%i==0)
			{
				quant++;
			}
		}
		if(quant==0)
		{
			primos++;
		}
	}
	printf("\n\nQuantidade de numeros primos na diagonal principal da Matriz A: %d", primos);
}