#include<stdio.h>
#include<stdlib.h>  
#include<string.h>

void said(char nomearquivo[], char nomearqui[])
{	
	int i, n, maior;
	char cidade[100], cidademaior[100];
	FILE *e, *p;
	p=fopen(nomearquivo, "rt");
	e=fopen(nomearqui, "wt");
	if(p==NULL || e==NULL)
	{
		printf("\nImpssivel abrir o arquivo");
		return;
	}
	fscanf(p, "%s %d", cidade, &maior);
  	strcpy(cidademaior, cidade);
	while(fscanf(p, "%s %d", cidade, &n)!=EOF)
	{
		if(n>maior)
		{
      			strcpy(cidademaior, cidade);
			maior=n;
		}
	}
	fprintf(e, "%s %d", cidademaior, maior);
	fclose(e);
	fclose(p);
}

int main()
{
	FILE *p, *k;
	int i, maior;
	char texto[100], cidademaior[100], texto1[]="entradadados.txt", texto2[]="saidadados.txt";
	p=fopen(texto1, "rt");
	k=fopen(texto2, "wt");
	while(!feof(p))
	{
		fgets(texto, 100, p);
		printf("\n%s", texto);
	}
	said(texto1, texto2);
	k=fopen(texto2, "rt");
	fscanf(k, "%s %d", cidademaior, &maior);
	printf("\n\nNumero  de habitantes da cidade com maior numero de habitantes : %s %d",cidademaior, maior);
	fclose(p);
	fclose(k);
}
	
		