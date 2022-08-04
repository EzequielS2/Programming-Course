#include<stdio.h>

void gravacao1(char nomeArq[], int codigo, int quant, float preco)
{
	FILE *p;
	p=fopen(nomeArq, "at");
	fprintf(p, "%d, %d, %f\n", codigo, quant, preco);
	fclose(p);
}

void imprimir1(char nomeArq[])
{
	FILE *p;
	int codigo, quant;
	float prec;
	p=fopen(nomeArq, "rt");
	while(!feof(p))
	{
		fscanf(p, "%d, %d, %f", &codigo, &quant, &prec);
		printf("\nCodigo do produto: %d", codigo);
		printf("\nQuantidade: %d", quant);
		printf("\nPreço: %f", prec);
	}
	fclose(p);
}

void gravacao2(char nomeArq[], char *texto)
{
	FILE *p;
	p=fopen(nomeArq, "at");
	fputs(texto, p);
	fputs("\n", p);
	fclose(p);
}

void imprimir2(char nomeArq[])
{
	FILE *p;
	char texto[100];
	p=fopen(nomeArq, "rt");
	while(!feof(p))
	{
		fgets(texto, 100, p);
		printf("\n%s", texto);
	}
	fclose(p);
}
int main()
{
	FILE *a1, *a2;
	float prec;
	char *nome1="nada1.txt", *nome2="nada2.txt", texto[30];
	int k, quantidade, codigo;
	a1=fopen(nome1, "wt");
	a2=fopen(nome2, "wt");
	if(a1==NULL || a2==NULL)
	{
		printf("\nImpossivel abrir o arquivo\n");
		return 1;  // ** Para ler, usamos return 1.
	}
	for(k=0; k<2; k++)
	{
		printf("\nDigite o codigo do produto: ");
		scanf("%d", &codigo);
		printf("\nDigite a quantidade: ");
		scanf("%d", &quantidade);
		printf("\nDigite o preço: ");
		scanf("%f", &prec);
		gravacao1(nome1, codigo, quantidade, prec);
	}
	imprimir1(nome1);	
	for(k=0; k<10; k++)
	{
		fgetc(stdin);
		printf("\nDigite um texto: ");
		gets(texto);
		gravacao2(nome2, texto);
	}
	imprimir2(nome2);
	fclose(a1);
	fclose(a2);
}
