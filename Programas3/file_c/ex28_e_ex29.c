#include<stdio.h>
#include<stdlib.h>  // **Já estou fazendo o exercicio 28 e 29 ao mesmo tempo.

int main()
{
	FILE *p;
	int i;
	float numero, soma;
	p=fopen("ex28.txt", "wt"); // Vamos abrir para gravacao no arquivo.
	if(p==NULL)
	{
		printf("\nImpossivel abrir o arquivo\n");
		return 1;  // ** Para ler, usamos return.
	}
	for(i=0; i<8; i++)
	{
		printf("\nDigite o numero: ");
		scanf("%f", &numero);
		fprintf(p, "%.2f\t ",numero);
	}
	fclose(p);
	p=fopen("ex28.txt", "rt");
	if(p==NULL)
	{
		printf("\nImpossivel abrir o arquivo\n");
		return 1;
	}
	printf("\nDados do arquivo: \n\n");
	while(fscanf(p, "%f", &numero)!=EOF)
	{
		printf("%.2f\t", numero);
		soma=soma+numero;
	}
	printf("\n\nMedia dos numeros: %.2f, Soma dos numeros: %.2f\n\n", soma/8.0, soma);
	fclose(p);
}
	

