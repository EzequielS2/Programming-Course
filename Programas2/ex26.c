#include<stdio.h>

int perfect(int a[5][5])
{
	int l, c, soma=0, k=1, perfeito=0;
	for(l=0; l<5; l++)
	{
		for(c=0; c<5; c++)
		{
			soma=0;
			for(k=1; k<a[l][c]; k++)
			{
				if(a[l][c]%k==0)
				{
					soma=soma+k;
				}
			}
	                if(soma==a[l][c])
	                {
		        	perfeito++;
		        }
			
		}
	}
	return(perfeito);
}

int main()
{
	int b[5][5], l, c;
	for(l=0; l<5; l++)
	{
		for(c=0; c<5; c++)
		{
			printf("\nDigite um numero: ");
			scanf("%d", &b[l][c]);
		}
	}
	printf("\nMatriz original: \n\n");
	for(l=0; l<5;l++)
	{
		for(c=0; c<5; c++)
		{
			printf("%d\t", b[l][c]);
		}
		printf("\n");
	}
	printf("\nQuantidade de numeros perfeitos: %d", perfect(b));
}