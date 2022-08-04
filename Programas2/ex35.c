#include<stdio.h>
#include<string.h>

void sequenciaFibonacci(int a);
int main()
{	
	int n;
	printf("\nDigite um numero: ");
	scanf("%d", &n);
	sequenciaFibonacci(n);
}

void sequenciaFibonacci(int a)
{
	int i, soma=0, k=0, b=1;
	printf("Sequencia Fibonacci: \n\n");
	for(i=0; i<a; i++)
	{
		printf("%d\t", soma);
		if(i==1)
		{
			printf("  %d    ", soma);
		}
		soma=k+b;
		k=b;
		b=soma;
	}
}
