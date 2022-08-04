#include<stdio.h>

int main()
{
	int a[10], b[10], g[20], i[20], h, r, t=0, n=0;
	for(h=0; h<10; h++)
	{
		printf("\nDigite um numero: ");
		scanf("%d, %d", &a[h]);
		printf("\nDigite outro numero: ");
		scanf("%d", &b[h]);
	}
	printf("\n\nVetor 1:  ");
	for(h=0; h<10; h++)
	{
		printf("%d\t", a[h]);
	}
	printf("\n\nVetor 2: ");
	for(h=0; h<10; h++)
	{
		printf("%d\t", b[h]);
	}
	for(h=0; h<10; h++)
	{
		g[t]=a[h];
		t++;
		g[t]=b[h];
		t++;
	}
	for(h=0; h<10; h++)
	{
		for(r=0; r<10; r++)
		{	if(a[h]==b[r])
			{
				i[h]=a[h];
				n++;
			}
		}
	}
	printf("\nUniao dos vetores: \n\n");
	for(h=0; h<t; h++)
	{
		printf("%d\t", g[h]);
	}
	if(n>0)
	{
		printf("\n\nIntersecao dos vetores: \n\n");
		for(h=0; h<n-1; h++)
		{
			printf("%d\t", i[h]);
		}
	}
	else
	{
		printf("\nNao existe intersecao\n\n");
	}
}
