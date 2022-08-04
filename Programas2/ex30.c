#include<stdio.h>

int main()
{
	int a[12], i, posicao=0, posicao1=0, maior, menor;
	for(i=0; i<12; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%d", &a[i]);
	}
	printf("Vetor: \n\n");
	maior=a[0];
	menor=a[0];
	for(i=0; i<12; i++)
	{
		if(a[i]>maior)
		{
			maior=a[i];
			posicao=i;
		}
		if(a[i]<menor)
		{
			menor=a[i];
			posicao1=i;
		}
		printf("%d\t", a[i]);
	}
	printf("\nMaior elemento do vetor: %d - posicao :%d \n\nmenor elemento do vetor: %d - posicao:%d\n\n", maior, posicao, menor, posicao1);
}
	