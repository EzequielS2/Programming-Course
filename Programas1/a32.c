#include<stdio.h>

int main()
{	int i, x[15];
	for(i=0; i<15; i++)
	{	printf("\n\nDigite um numero: ");
		scanf("%d", &x[i]);
	}
	for(i=0; i<15; i++)
	{	if(x[i]%2==0)
		{	printf("\n\n\nx[%d]: %d - Par\n", i, x[i]);
		}
		else
		{	printf("\nx[%d]: %d - Impar\n", i, x[i]);
		}
	}
}