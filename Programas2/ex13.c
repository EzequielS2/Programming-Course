#include<stdio.h>

int divisao(int n, int y)
{
	int i=0;
	while(n!=1)
	{
		if(n%y==0)
		{
			n=n/y;
			i++;
		}
	}
	return(i);
}

int main()
{
	int a, b;
	printf("\nDigite dois numeros: ");
	scanf("%d, %d", &a, &b);
	printf("\nQuantas vezes %d divide %d: %d ", b, a, divisao(a,b));
}	