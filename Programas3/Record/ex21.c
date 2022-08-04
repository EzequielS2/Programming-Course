#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 100

			// Se abrir leitura na main, eu tenho que fazer **p-- na main ou na funcao se eu for fazer qualquer coisa depois de ter lido na main.
			// nao é pra colocar p-- se eu fizer tudo dentro de funcao. Vai ser tudo **p++. 

struct data
{
	int dia, ano;
	char mes[20];
};

struct agenda
{
	char nome[40], email[40], endereco[40];
	struct data aniversario;
};

void leitura(struct agenda *p)
{
	int i;
	for(i=0; i<TAM; i++)
	{
		printf("\nDite o nome: ");
		gets(p->nome);
		printf("\nDigite o endereco: ");
		gets(p->endereco);
		printf("\nDigite o email: ");
		gets(p->email);
		printf("\nDigite o dia do aniversario: ");
		scanf("%d", &p->aniversario.dia);
		printf("\nDigite o ano de aniverario: ");
		scanf("%d", &p->aniversario.ano);
		fgetc(stdin);
		printf("\nDiga o mes de aniversario: ");
		gets(p->aniversario.mes);	
		p++;
	}
}


void imprimir(struct agenda *p)
{
	int i;
	for(i=0; i<TAM; i++)
	{
		printf("\nPessoa %d", i+1);
		printf("\n\n----------------\n");
		printf("\nnome: %s", p->nome);
		printf("\nEndereco: %s", p->endereco);
		printf("\nEmail: %s", p->email);
		printf("Data de aniversario: Dia %d, Mes: %s, Ano: %d", p->aniversario.dia, p->aniversario.mes, p->aniversario.ano);
		p++;
	}
}

void buscaMes(struct agenda *p, char *mes1)
{
	int i, k=0;
	printf("\nPessoas encontradas no mes de %s\n\n", mes1);
	for(i=0; i<TAM; i++)
	{
		if(strcmp(p->aniversario.mes, mes1)==0)
		{
			printf("\n\n-------------------------------\n\n");
			printf("\n\nNome: %s, Endereco: %s, Email: %s\n\n", p->nome, p->endereco, p->email);
			printf("\n\nData de aniversario: Dia: %d, Mes: %s, Ano: %d\n\n", p->aniversario.dia, p->aniversario.mes, p->aniversario.ano);
			k++;
		}
		p++;
	}
	if(k==0)
	{
		printf("\n\nNenhuma pessoa foi encontrada no mes %s\n\n", mes1);
	}
}

int main()
{ 
	char mes1[40];
	struct agenda *p;
	p=(struct agenda*)malloc(TAM * sizeof(struct agenda));	
	leitura(p);
	imprimir(p);
	fgetc(stdin);
	printf("\nDiga qual mes buscar: ");
	gets(mes1);
	buscaMes(p, mes1);
}
	
	









		