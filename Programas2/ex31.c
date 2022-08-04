#include<stdio.h>

float maior(float b[10]);

int main()
{
	int i;
	float a[10];
	for(i=0; i<10; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%f", &a[i]);
	}
	printf("Vetor: \n\n\n");
	for(i=0; i<10; i++)
	{
		printf("%.1f\t", a[i]);
	}
	printf("\n\nVetor alterado: \n\n");
	for(i=0; i<10; i++)
	{
		a[i]=a[i]/maior(a);
		printf("%.1f\t", a[i]);
	}
}

float maior(float b[10])
{
	int i, maior;
	for(i=0; i<10; i++)
	{
		if(b[i]>maior)
		{
			maior=b[i];
		}
	}
	return(maior);
}