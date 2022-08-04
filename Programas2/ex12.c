#include<stdio.h>

int primo(int k);

int primo(int k)
{
	int i, quant=0;
	if(k>1)
	{
		for(i=2; i<k; i++)
		{
			if(k%i==0)
			{
				quant++;
			}
		}
	}
	if(quant==0 && k!=1)
	{
		printf("\nO numero %d e primo", k);
	}
	else
	{
		printf("\nO numero %d nao e primo", k);
	}
}
int main()
{
	int n;
	printf("\nDigite um numero: ");
	scanf("%d", &n);
	primo(n);
}
	