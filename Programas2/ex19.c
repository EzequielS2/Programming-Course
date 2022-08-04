#include<stdio.h>

int soma(int A[4], int D[4]);
int produto(int P[4], int L[4]);
int igual(int J[4], int G[4], int n);

int soma(int A[4], int D[4])
{
	int i, soma=0;
	for(i=0; i<4; i++)
	{
		soma=soma+A[i]+D[i];
	}
	return(soma);
}

int produto(int P[4], int L[4])
{
	int soma=0, i;
	for(i=0; i<4; i++)
	{
		soma=soma+P[i]*L[i];
	}
	return(soma);
}

int igual(int J[4], int G[4], int n)
{
	int i, quant=0, quant1=0, soma;
	for(i=0; i<4; i++)
	{
		if(J[i]==n)
		{
			quant++;
		}
		if(G[i]==n)
		{
			quant1++;
		}
	}
	soma=quant+quant1;
	return(soma); 
}

int main()
{
	int Z[4], T[4], k, i;
	printf("\n\nDigite um numero para fazer o teste: ");
	scanf("%d", &k);
	for(i=0; i<4; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%d", &Z[i]);
		printf("\nDigite outro numero: ");
		scanf("%d", &T[i]);
	}
	printf("\nSoma dos elementos dos vetores: %d ", soma(Z, T));
	printf("\nValor do produto interno: %d", produto(Z, T));
	printf("\nQuantidade de elementos sao iguais a %d em Z e T: %d", k, igual(Z, T, k));
}
