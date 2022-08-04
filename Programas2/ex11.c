#include<stdio.h>

int fatorial(int n)
{
	int i, fatorial=1;
	for(i=1; i<=n; i++)
	{
		fatorial=fatorial*i;
	}
	return(fatorial);
}

int main()
{
	int k;
	printf("\nDigite um numero: ");
	scanf("%d", &k);
	printf("\n\nFatorial de %d: %d", k, fatorial(k));
}
	