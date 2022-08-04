#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 20

			// Se abrir leitura na main, eu tenho que fazer **p-- na main ou na funcao se eu for fazer qualquer coisa depois de ter lido na main.
			// nao é pra colocar p-- se eu fizer tudo dentro de funcao. Vai ser tudo **p++. 
struct banda
{
	char nome[40], tipomusica[40];
	int integrantes, ranking;
};

void informacao(struct banda *p)
{
	int i, k=0;
	char nome1[40];
	printf("\nDiga qual o nome da banda para ver as informacoes: ");
	gets(nome1);
	p++;
	for(i=0; i<TAM; i++)
	{
		if(strcmp(p->nome, nome1)==0)
		{
			printf("\nNome da banda: %s", p->nome);
			printf("\nTipo de musica toca: %s\n", p->tipomusica);
			printf("\nQuantidade de integrantes da banda: %d", p->integrantes);
			printf("\nPosicao das 5 melhores bandas que voce gosta: %d", p->ranking);
			k++;
		}
		p++;
	}
	if(k==0)
	{
		printf("\nNao foi encontrada sua banda favorita no registro\n\n");
	}
}


void tipoMusica(struct banda *p)
{
	int i, k=0;
	char nome1[40];
	p++;
	printf("\nDiga qual tipo de musica voce quer procurar: ");
	gets(nome1);
	printf("\n\nBandas com esse tipo de musica: \n\n");
	for(i=0; i<TAM; i++)
	{
		if(strcmp(p->tipomusica, nome1)==0)
		{
			printf("\n%s\n", p->nome);
			k++;
		}
		p++;
	}
	if(k==0)
	{
		printf("\nNao foi encontrado nenhum tipo de musica\n\n");
	}
}


void favoritos(struct banda *p)
{
	int i, k=0;
	char nome1[40];
	p++;
	printf("\nDiga o nome da sua banda favorita: ");
	gets(nome1);
	printf("\nBanda encontrada esta no registro: \n\n");
	for(i=0; i<TAM; i++)
	{
		if(strcmp(p->nome, nome1)==0)
		{
			printf("\n%s\n", p->nome);
			k++;
		}
		p++;
	}
	if(k==0)
	{
		printf("\nNao foi encontrada sua banda favorita no registro\n\n");
	}
}

int main()
{
	int i;
	struct banda *p;
	p=(struct banda*)malloc(TAM * sizeof(struct banda));
	for(i=0; i<TAM; i++)
	{
		printf("\nDigite o nome da banda: ");
		gets(p->nome);
		printf("\nDigite o tipo de musica: ");
		gets(p->tipomusica);
		printf("\nDigite a quantidade de integrantes: ");
		scanf("%d", &p->integrantes);
		printf("Digite o ranking dela: ");
		scanf("%d", &p->ranking);
		fgetc(stdin);
		p++;
	}
	
	p--;
	for(i=0; i<TAM; i++)
	{
		printf("\nBanda %d", i+1);
		printf("\n\n--------------------------------------------\n\n");
		printf("\nNome da banda: %s", p->nome);
		printf("\nTipo de musica: %s", p->tipomusica);
		printf("\nNumero de integrantes: %d", p->integrantes);
		printf("\nRanking: %d", p->ranking);
		p--; // na funcao tem que colocar p++ fora e dentro do for, pois o ponteiro voltou para a[-1].
	}
	informacao(p);
	tipoMusica(p);
	favoritos(p);
}










