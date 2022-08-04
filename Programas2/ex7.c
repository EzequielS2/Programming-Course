#include<stdio.h>

int main()
{	int l, c;
	float A[5][5]; 
	for(l=0; l<5; l++)
	{	for(c=0; c<5; c++)
		{
			printf("\nDigite um numero: ");
			scanf("%f", &A[l][c]);
		}
	}
	printf("Matriz lida: \n\n");
	for(l=0; l<5; l++)
	{
		for(c=0; c<5; c++)
		{
			printf("%f\t", A[l][c]);
		}
		printf("\n");
	}
	printf("\n\nDiga qual linha imprimir: ");
	scanf("%d", &l);
	for(c=0; c<5; c++)
	{
		printf("%f\t", A[l][c]);
	}
}
