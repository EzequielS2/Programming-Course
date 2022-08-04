#include<stdio.h>

void perfeito(int n);  //Uso void, pois não preciso retornar nenhum valor.
void perfeito(int n)
{
	int i, soma=0;
	for(i=1; i<n; i++)
	{
		if(n%i==0)
		{
			soma=soma+i;
		}
	}
	if(soma==n)
	{
		printf("\nO numero %d e perfeito", n);
	}
	else
	{
		printf("\nNao e perfeito");
	}
}

int main()
{
	int l;
	printf("Digite um numero: ");
	scanf("%d", &l);
	perfeito(l);
}