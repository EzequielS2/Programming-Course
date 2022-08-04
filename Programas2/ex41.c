#include<stdio.h>

int main()
{
	int a[10][10], l, c, k, somaLinha=0, linha, somaColuna=0, coluna, transposta[10][10], somaDiaPrincipal=0, matrizTriangularSuperior[10][10], matrizTriangularInferior[10][10], matrizAlteradaColunaPorColuna[10][10];
	for(l=0; l<10; l++)
	{
		for(c=0; c<10; c++)
		{
			printf("\nDigite um numero: ");
			scanf("%d", &a[l][c]);
		}
	}
	printf("\n\nMatriz lida: \n\n");
	for(l=0; l<10; l++)
	{
		for(c=0; c<10; c++)
		{
			printf("%d\t", a[l][c]);
		}
		printf("\n");
	}
	printf("\n\nDigite uma linha que quer somar: ");
	scanf("%d", &linha);
	for(c=0; c<10; c++)
	{
		somaLinha=somaLinha+a[linha][c];
	}
	printf("\n\nDigite a coluna que quer somar: ");
	scanf("%d", &coluna);
	for(l=0; l<10; l++)
	{
		somaColuna=somaColuna+a[l][coluna];
	}
	for(l=0; l<10; l++)
	{
		for(c=0; c<10; c++)
		{
			transposta[c][l]=a[l][c];
		}
	}
	for(l=0; l<10; l++)
	{
		somaDiaPrincipal=somaDiaPrincipal+a[l][l];
	}
	for(l=0; l<10; l++)
	{
		for(c=0; c<10; c++)
		{
			if(c>=l)
			{
				matrizTriangularSuperior[l][c]=a[l][c];
			}
			else
			{
				matrizTriangularSuperior[l][c]=0;
			}
		}
	}
	for(l=0; l<10; l++)
	{
		for(c=0; c<10; c++)
		{
			if(c>l)
			{
				matrizTriangularInferior[l][c]=0;
			}
			else
			{
				matrizTriangularInferior[l][c]=a[l][c];
			}
		}
	}
	k=9;
	for(l=0; l<10; l++)
	{
		for(c=0; c<10; c++)
		{
			matrizAlteradaColunaPorColuna[c][l]=a[c][k];
		}
		k--;
	}
	printf("\n\nSoma da linha %d: %d", linha, somaLinha);
	printf("\n\nSoma da coluna %d: %d", coluna, somaColuna);
	printf("\n\nMatriz transposta: \n\n");
	for(l=0; l<10; l++)
	{
		for(c=0; c<10; c++)
		{
			printf("%d\t", transposta[l][c]);
		}
		printf("\n");
	}
	printf("\n\nMatriz triangular superior: \n\n");
	for(l=0; l<10; l++)
	{
		for(c=0; c<10; c++)
		{
			printf("%d\t", matrizTriangularSuperior[l][c]);
		}
		printf("\n");
	}
	printf("\n\nMatriz triangular inferior: \n\n");
	for(l=0; l<10; l++)
	{
		for(c=0; c<10; c++)
		{
			printf("%d\t", matrizTriangularInferior[l][c]);
		}
		printf("\n");
	}
	printf("\n\nMatriz alterada coluna por coluna: \n\n");
	for(l=0; l<10; l++)
	{
		for(c=0; c<10; c++)
		{
			printf("%d\t", matrizAlteradaColunaPorColuna[l][c]);
		}
		printf("\n");
	}
}





	

		

