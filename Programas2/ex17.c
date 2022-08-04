#include<stdio.h>
#include<stdlib.h>

int soma(int *A, int tam);
int soma(int *A, int tam)
{
	int i, soma=0;
	for(i=0; i<tam; i++)
	{
		soma=soma+*(A+i);
	}
	return(soma);
}

int main()
{
	int *B, tam1=3, i;
	B=(int *)malloc(tam1 * sizeof(int));
	if(B==NULL)
	{
		printf("Impossivel alocar memoria");
		return 1;
	}
	for(i=0; i<tam1; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%d", &*(B+i));
	}
	printf("\n\nSoma dos elementos do vetor: %d", soma(B, tam1));
}