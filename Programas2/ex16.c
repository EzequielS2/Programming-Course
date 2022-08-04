#include<stdio.h>
#include<stdlib.h>

int produto(int tam, int *A, int *B);
int produto(int tam, int *A, int *B)
{
	int soma=0, i;
	for(i=0; i<tam; i++)
	{
		soma=soma+(*(B+i)*(*(A+i)));			
	}
	return(soma);
}
	
int main()
{
	int *Q, *T, i, tamanho;
	printf("\nDigite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	Q=(int *)malloc(tamanho * sizeof(int));
	T=(int *)malloc(tamanho * sizeof(int));
	for(i=0; i<tamanho; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &*(Q+i));
		printf("\nDigite outro numero: ");
		scanf("%d", &*(T+i));
	}
	produto(tamanho, Q, T);
	printf("Produto interno entre os vetores: %d", produto(tamanho, Q, T));
}
	