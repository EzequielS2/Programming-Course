#include<stdio.h>
#include<stdlib.h>   
#define tam 3  // ***Usei a o define, pois o exercicio não pediu para alocar ou colocar o tamanho como parâmetro. 

int soma(int *a, int *b, int n)    // Só vai colocar * na função se for retornar vetor ou que eu quero definir
{					// um numero na main() igual o EXERCICIO 2.
	int i, soma=0;
	for(i=0; i<n; i++)
	{
		soma=soma+*(a+i)+*(b+i);
	}
	return soma;
}

int produt(int *a, int *b, int n)
{
	int i, prod=0;
	for(i=0; i<n; i++)
	{
		prod=prod+(*(a+i))*(*(b+i));
	}
	return prod;
}

int igual(int *a, int *b, int n)
{
	int i, k, quant=0;
	for(k=0; k<n; k++)
	{
		for(i=0; i<n; i++)
		{	
			if(*(a+k)==*(b+i))
			{
				quant++;
			}
		}
	}
	return (quant);
}


int main()
{
	int i, *u, *p;
	u=(int *)malloc(tam * sizeof(int));
	p=(int *)malloc(tam * sizeof(int));
	for(i=0; i<tam; i++)
	{
		printf("\n\nDdigite um numero: ");
		scanf("%d", &u[i]); // Pode colocar para ler (a+i) sem &	
		printf("\n\nDigite outro numero: ");
		scanf("%d", &p[i]);
	}
	printf("\b\bSoma dos elemntos dos vetores: %d", soma(u, p, tam));
	printf("\n\nProduto interno: %d", produt(u, p, tam));
	printf("\n\nElementos iguais nos vetores: %d\n\n", igual(u, p, tam));
}

