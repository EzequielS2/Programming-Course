#include<stdio.h>
float media1(float A[3][2], float B[3][2], float R[3][2]);
float media1(float A[3][2], float B[3][2], float R[3][2])
{
	int l, c;
	float media, soma=0;
	for(l=0; l<3; l++)
	{
		for(c=0; c<2; c++)
		{
			soma=soma+A[l][c]+B[l][c]+R[l][c];
		}
	}
	media=(float)soma/18.0;
	return(media);
}
int main()
{
	int l, c;
	float P[3][2], J[3][2], K[3][2];
	printf("Matriz P: \n\n");
	for(l=0; l<3; l++)
	{
		for(c=0; c<2; c++)
		{
			printf("Digite um numero: ");
			scanf("%f", &P[l][c]);
			printf("Digite um numero: ");
			scanf("%f", &K[l][c]);
			printf("Digite um numero: ");
			scanf("%f", &J[l][c]);
		}
	}
	for(l=0; l<3; l++)
	{
		for(c=0; c<2; c++)
		{
			printf("%f\t", P[l][c]);
		}
		printf("\n");
	}
	printf("Matriz K: \n\n");
	for(l=0; l<3; l++)
	{
		for(c=0; c<2; c++)
		{
			printf("%f\t", K[l][c]);
		}
		printf("\n");
	}
	printf("Matriz J:\n\n ");
	for(l=0; l<3; l++)
	{
		for(c=0; c<2; c++)
		{
			printf("%f\t", J[l][c]);
		}
		printf("\n");
	}
	printf("Media dos elementos das matrizes: %f", media1(P, J, K));
}