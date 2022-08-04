#include<stdio.h>

int main()
{
	int A[6][3], N[3][6], l, c, B[6][6], m, soma;
	for(l=0; l<6; l++)
	{
		for(c=0; c<4; c++)
		{
			printf("\nDigite um numero: ");
			scanf("%d", &A[l][c]);
		}
	}
	for(l=0; l<6; l++)
	{
		for(c=0; c<3; c++)
		{
			printf("\nDigite um numero: ");
			scanf("%d", &N[l][c]);
		}
	}
	for(l=0; l<6; l++)
	{
		for(c=0; c<6; c++)
		{	soma=0;
			B[l][c]=0;
			for(m=0; m<3; m++)
			{
				B[l][c]=B[l][c]+A[l][m]*N[m][c];
			}
		}
	}
	printf("Matriz Multiplicacao: \n");
	for(l=0; l<6; l++)
	{
		for(c=0; c<6; c++)
		{
			printf("%d\t", B[l][c]);
		}
		printf("\n");
	}
}