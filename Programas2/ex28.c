#include<stdio.h>

int main()
{
	int a[5][5], l, c, soma=0, k, maior;
	for(l=0; l<5; l++)
	{
		for(c=0; c<5; c++)
		{
			printf("\nDigite um numero: ");
			scanf("%d", &a[l][c]);
		}
	}
	printf("Matriz original: \n\n");
	for(l=0; l<5; l++)
	{
		for(c=0; c<5; c++)
		{
			printf("%d\t", a[l][c]);
		}
		printf("\n");
	}
	maior=a[0][4];
	for(l=0; l<5; l++)
	{
		soma=soma+a[l][l];		
	}
	printf("Soma da diagonal principal: %d", soma);
	c=4;
	for(l=0; l<5; l++)
	{
		if(a[l][c]>maior)
		{
			maior=a[l][c];
		}
		c--;
	}
	printf("\nMaior elemntos da diagonal secundaria: %d", maior);
}