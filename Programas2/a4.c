#include<stdio.h>
#define nl 4
#define nc 5

int media(int x[nl][nc]);
int menor(int x[nl][nc]);
int pares(int x[nl][nc]);

float mediaM(int x[nl][nc])
{
	int l, c, soma=0;
	float media;
	for(l=0; l<4; l++)
	{
		for(c=0; c<5; c++)
		{
			soma=soma+x[l][c];
		}
	}
	media =soma/20.0;
	return(media);
}

int menor(int x[nl][nc])
{
	int l, c, menor;
	menor=x[0][0];
	for(l=0; l<4; l++)
	{
		for(c=0; c<5; c++)
		{
			if(x[l][c]<menor)
			{
				menor=x[l][c];
			}
		}
	}
	return(menor);
}

int pares(int x[nl][nc])
{
	int pares=0, impares=0, l, c;
	for(l=0; l<4; l++)
	{
		for(c=0; c<5; c++)
		{
			if(x[l][c]%2==0)
			{
				pares++;
			}
			else
			{
				impares++;
			}
		}
	}
	printf("\n Quantidade de impares: %d", impares);
	return(pares);
}

int main()
{
	int l, c, a[nl][nc];
	for(l=0; l<4; l++)
	{
		for(c=0; c<5; c++)
		{
			printf("\nDigite umnumero: ");
			scanf("%d", &a[l][c]);
			printf("\n");
		}
	}
	printf("\n\nMedia dos elementos da matiz: %f\n\n", mediaM(a));
	printf("\nQuantidade de pares: %d", pares(a));
	printf("\n\nMenor elemento da matriz: %d", menor(a));
}





