#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 3

			// Se abrir leitura na main, eu tenho que fazer **p-- na main ou na funcao se eu for fazer qualquer coisa depois de ter lido na main.
			// nao é pra colocar p-- se eu fizer tudo dentro de funcao. Vai ser tudo **p++. 
struct supermercado
{
	char nomeproduto[40], setor;
	int quantidade;
	float preco;
};

void leitura(struct supermercado *p)
{
	int i;
	for(i=0; i<TAM; i++)
	{
		printf("\nDigite o nome do produto: ");
		gets(p->nomeproduto);
		printf("\nDigite o setor: ");
		scanf("%c", &p->setor);
		printf("\nDiga a quantidade de produtos que tem: ");
		scanf("%d", &p->quantidade);
		printf("\nDiga o preco do produto: ");
		scanf("%f", &p->preco);
		fgetc(stdin);
		p++;
	}
}

void imprimir(struct supermercado *p)
{
	int i;
	for(i=0; i<TAM; i++)
	{
		printf("\n %d\n", i+1);
		printf("\n\n------------------------------\n\n");
		printf("\nNome do produto: %s\n", p->nomeproduto);
		printf("\nSetor: %c\n", p->setor);
		printf("\nQuantidade: %d\n", p->quantidade);
		printf("\nPreco: %f\n", p->preco);
		p++;
	}
}

void procurarSetor(struct supermercado *p)
{
	int i, k=0;
	char setor1;
	printf("\nDigite o setor desejado: ");
	scanf("%c", &setor1);
	printf("\nProdutos do setor %c: \n\n", setor1);
	for(i=0; i<TAM; i++)
	{
		if(p->setor==setor1)
		{
			printf("\n\n----------------------------------\n\n");
			printf("\nNome do produto: %s", p->nomeproduto);
			printf("\nQuantidade em estoque: %d", p->quantidade);
			printf("\nPreco por unidade: %f\n\n", p->preco);
			k++;
		}
		p++;
	}
	if(k==0)
	{
		printf("\nNao foi encontrado o setor\n\n");
	}
}

void capital(struct supermercado *p)
{
	int i;
	float soma;
	for(i=0; i<TAM; i++)
	{
		soma=soma+(p->preco)*(p->quantidade);
		p++;
	}	
	printf("\n\nCapital investido: %f", soma);
}

int main()
{
	struct supermercado *p;
	char setor1;
	p=(struct supermercado*)malloc(TAM * sizeof(struct supermercado));
	if(p==NULL)
	{
		printf("\nImpossivel alocar memoria\n\n");
		return 1;
	}
	leitura(p);
	imprimir(p);
	procurarSetor(p);
	capital(p);
}



	















