#include<stdio.h>

int dobro(int A[4][5]);

int dobro(int A[4][5])
{
	int l, c, D[4][5], maior;
	for(l=0; l<4; l++)
	{
		for(c=0; c<5; c++)
		{	
			D[l][c]=2*A[l][c];
		}
	}
	printf("Matriz Dobro: \n\n");
	maior=D[0][0];
	for(l=0; l<4; l++)
	{
		for(c=0; c<5; c++)
		{
			printf("%d\t", D[l][c]);
			if(D[l][c]>maior)
			{
				maior=D[l][c];
			}
		}
		printf("\n");
	}
	printf("\nMaior elemento da matriz dobro: %d", maior);
	return(maior);
}


int main()
{
	int C[4][5], l, c;
	for(l=0; l<4; l++)
	{
		for(c=0; c<5; c++)
		{
			printf("Digite um numero: ");
			scanf("%d", &C[l][c]);
		}
	}
	printf("\nMatriz original: \n\n");
	for(l=0; l<4; l++)
	{
		for(c=0; c<5; c++)
		{
			printf("%d\t", C[l][c]);
		}
		printf("\n");
	}
	dobro(C);
}	