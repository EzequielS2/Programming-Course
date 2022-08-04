#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 50

struct livro
{
	char titulo[15], autor[20], estilo[10];
	int codigo;
	float preco;
};

void incluir(struct livro *p, int *quantidadelivros, int incluirlivros)
{
	int i;
	for(i=0; i<incluirlivros; i++)
	{
		if(*quantidadelivros<=50)
		{
			fgetc(stdin);
			printf("\nDigite o titulo: ");
			gets(p->titulo);
			printf("\nDigitte o autor: ");
			gets(p->autor);
			printf("\nDigite o estilo: ");
			gets(p->estilo);
			printf("\nDigite o codigo: ");
			scanf("%d", &p->codigo);
			printf("\nDigite o preço: ");
			scanf("%f", &p->preco);
		}
		else
		{
			printf("\nNao tem mais espaco na memoria\n");
		}
		p++;
		(*quantidadelivros)++;
	}
}

void livros(struct livro *p, int quantidadelivros)
{
	int i;
	printf("\nLivros no vetor: \n\n");
	p--;
	for(i=0; i<quantidadelivros; i++)
	{
		printf("\n\n---------------------------------------\n\n");
		printf("\n\nLivro %d\n\n", i+1);
		printf("\nTitulo: %s", p->titulo);
		printf("\nAutor: %s", p->autor);
		printf("\nEstilo: %s", p->estilo);
		printf("\nCodigo: %d", p->codigo);
		printf("\nPreco: %f\n\n", p->preco);
		p--;
	}
}


void buscaAutor(struct livro *p, char *autor1, int *quantidadelivros)
{
	int i, h=0;
	for(i=0; i<*quantidadelivros; i++)
	{
		if(strcmp(p->autor, autor1)==0)
		{
			printf("\nAutor encontrado: %s", p->autor);
			h++;
		}
		p++;
	}
	if(h==0)
	{
		printf("\nAutor nao encontrado\n");
	}
}
	
void buscaTitulo(struct livro *p, int *quantidadelivros, char *livr)
{
	int i, h=0;
	for(i=0; i<*quantidadelivros; i++)	
	{
		if(strcmp(p->titulo, livr)==0)
		{
			printf("\nTitulo encontrado: %s", p->titulo);
			h++;
		}
		p++;
	}
	if(h==0)
	{
		printf("\nAutor nao encontrado\n");
	}
}

void buscaEstilo(struct livro *p, int *quantidadelivros, char *estil)
{
	int i, h=0;
	for(i=0; i<*quantidadelivros; i++)
	{
		if(strcmp(p->estilo, estil)==0)
		{
			printf("\nEstilo encontrado: %s", p->estilo);
			h++;
		}
		p++;
	}
	if(h==0)
	{
		printf("\nAutor nao encontrado\n");
	}
}

void Media(struct livro *p, int quantidadelivros)
{
	int i;
	float media=0;
	p--;
	for(i=0; i<quantidadelivros; i++)
	{
		media=media+p->preco;
		p--;
	}
	printf("\nMedia de precos: %.2f", (float)media/(quantidadelivros));
}

int main()
{
	int i, k=0, n;
	char a, estilo1[100], titulo1[100], autor1[100]; 
	struct livro *t;
	t=(struct livro*)malloc(TAM * sizeof(struct livro));
	for(i=0; i<2; i++)
	{
		printf("\nInclua o primeiro titulo: ");
		gets(t->titulo);
		printf("\nDigite o primeiro autor: ");
		gets(t->autor);
		printf("\nDifite o primeiro estilo: ");
		gets(t->estilo);
		printf("\nDigite o primeiro codigo: ");
		scanf("%d", &t->codigo);
		printf("\nDigite o primeiro preco: ");
		scanf("%f", &t->preco);
		fgetc(stdin);
		t++;
		k++;
	}
 	do{
		printf("\n I - Incluir livros\n L - Listar livros\n A - Buscar por autor\n T - Buscar por titulo\n E - Buscar por estilo\n M - Calcular a media de preco\n S - Sair\n");
		scanf("%c", &a);
		switch(a)
		{
			case 'I':
			printf("\nDigite a quantidade de livros que vai inlcuir: ");
			scanf("%d", &n);
			incluir(t, &k, n);
			break; 

			case 'L':
			livros(t, k);
			break;
		
			case 'A':
			fgetc(stdin);
			printf("\nDigite o autor que quer encontar: ");
			gets(autor1);
			buscaAutor(t, autor1, &k);
			break;


			case 'T':	
			fgetc(stdin);
			printf("\nDigite o titulo que deseja encontar: ");
			gets(titulo1);
			buscaTitulo(t, &k, titulo1);
			break;
		
			case 'E':
			fgetc(stdin);
			printf("\nDigite o estilo do livro que quer encontrar: ");
			gets(estilo1);
			buscaEstilo(t, &k, estilo1);
			break;
		
			case 'M': 
			Media(t, k);
			break;
		
			case 'S':
			break;
		
			default:
			printf("\nDigite corretamente\n\n");
		}	
	}while(a!='S');
}
	

					






	









