#include<stdio.h>

int main()
{
	int a[5][4], l, c, n, linha, quant, coluna;
	for(l=0; l<5; l++)
	{
		for(c=0; c<4; c++)
		{
			printf("Digite um numero: ");
			scanf("%d", &a[l][c]);
		}
	}
	printf("\n\nMAtriz lida: \n\n");
	for(l=0; l<5; l++)
	{
		for(c=0; c<4; c++)
		{
			printf("%d\t", a[l][c]);
		}
		printf("\n");
	}
	printf("\n\nDigite um numero de comparacao: ");
	scanf("%d", &n);
	for(l=0; l<5; l++)
	{
		for(c=0; c<4; c++)
		{
			if(a[l][c]==n)
			{
				quant++;
				linha=l;
				coluna=c;
			}
		}
	}
	if(quant==0)
	{
		printf("\nO numero %d nao foi encontrado na matriz\n\n", n);
	
	}
	else
	{
		printf("\n\nO numero %d foi encontrado:  Posicao - linha: %d, coluna: %d ", n, (linha+1), (coluna+1));
	}
}
