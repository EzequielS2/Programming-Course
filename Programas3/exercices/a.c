#include<stdio.h>
#include<stdlib.h>

int main()
{
	int qunt=0;
	float num;
	char nome[30];
	FILE *arq;
	printf("\nDigite o nome do arquivo: ");
	gets(nome);
	arq=fopen(nome, "wt");   // (wt) é para gravação (w) em texto (t).  abrimos o arquivo com o nome que a pessoa digitar.
	if(arq==NULL)
	{
		printf("\nImpossivel abrir o arquivo");
		return 1;
	}
	printf("\nDigite um numero: ");
	scanf("%f", &num);
	fprintf(arq, "%f\n", num);  // Estou copiando (num) no arquivo.
	while(num!=0)
	{
		printf("\nDigite um numero: ");
		scanf("%f", &num);
		fprintf(arq, "%f\n", num);  // Estou copiando (num) no arquivo.
	}
	fclose(arq);
	
	// Vamos abrir para ler e imrprimir o que está no arquivo.
	
	arq=fopen(nome, "r");  // (r) é para ler e (t) é arquivo texto. Abrimos um arquivo texto.
	if(arq==NULL)
	{
		printf("\nImpossivel abrir o arquivo");
		return 1;
	}
	while(!feof(arq))
	{
		fscanf(arq, "%f", &num);   // Estou lendo cada numero que eu registrei no arquivo.
		printf("%.3f\n", num);        // Agora estou imprimindo cada numero que eu que estava no arquivo.
	}
}









	