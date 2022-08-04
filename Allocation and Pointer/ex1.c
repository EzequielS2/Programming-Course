#include<stdio.h>
#include<stdlib.h>

int *inverter(int *a, int n)
{
	int i, k, *t;
	k=0;
	for(i=n-1; i>=0; i--)
	{
		*(t+k)=*(a+i);
		k++;
	}
	return (t);
}

int pares(int *a, int n, int *impar) // Não é como parâmetro o vetor ou valor que eu vou retornar.
{
	int par=0, i;
	*impar=0;
	for(i=0; i<n; i++)	
	{
		if(*(a+i)%2==0)
		{
			par++;
		}
		else 
		{
			(*impar)++;
		}
	}
	return (par);
}

int main()
{
	int *b, *in, n, i, impares;
	printf("\n\nDigite o tamanho do vetor: ");	
	scanf("%d", &n);
	b=(int *)malloc(n * sizeof(int));
	in=(int *)malloc(n * sizeof(int));
	if(b==NULL)
	{
		printf("\n\nImpossivel alocar memoria\n");
		return (1);
	}
	if(in==NULL)
	{
		printf("\n\nImpossivel alocar memoria\n");
		return (1);
	} 
	for(i=0; i<n; i++)
	{
		printf("\n\nDigite um numero: ");
		scanf("%d", (b+i));     // Não é pra colocar & pra ler.
	}
	printf("\n\nQuantidade de pares no vetor: %d", pares(b, n, &impares));
	printf("\n\nQuantidade de impares: %d", impares);
	in=inverter(b, n);  // Quando é um vetor, eu tenho que criar um ponteiro para receber o vetor da função que eu chamei. 
	printf("\n\nVetor invertido: \n\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", *(in+i));
	}
}	


