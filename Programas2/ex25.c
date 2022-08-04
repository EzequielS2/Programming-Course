#include<stdio.h>

int primos(int b[20]);

int main()
{
	int a[20], i;
	for(i=0;i<20; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%d", &a[i]);
	}
	printf("\nVetor a: \n");
	for(i=0; i<20; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\nQuantidade de numeros primos: %d", primos(a));
}

int primos(int b[20])
{
	int i, quant=0, k=2, primos1=0;
	for(i=0; i<20; i++)
	{
		if(b[i]>=2)
		{
			quant=0;
			for(k=2; k<b[i]; k++)
			{
				if(b[i]%k==0)
				{
					quant++;
				}
			}
			if(quant==0)
			{
				primos1++;
			}
		}
	}
	return(primos1);
}