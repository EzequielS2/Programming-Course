#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct produto 
{
	int codigo, quantidade, venda;
	float custo;
	char nome[30];
};

void inclusao(struct produto *p, int produtoscadastrados)
{
	p+=produtoscadastrados;
	fgetc(stdin);
	printf("\nDigite o nome do produto: ");
	gets(p->nome);
	printf("\nDigite o codigo do produto: ");
	scanf("%d", &p->codigo);
	printf("\nDigite a quantidade no estoque: ");
	scanf("%d", &p->quantidade);
	printf("\nDigite o custo unitario: ");
	scanf("%f", &p->custo);
	printf("\nDigite a quantidade de venda por semana: ");
	scanf("%d", &p->venda);
}

void relatorioProdutos(struct produto *p, int produtoscadastrados)
{
	int i;
	for(i=0; i<produtoscadastrados; i++)
	{
		printf("\n\n-----------------------------------------------------\n\n");
		printf("\n\nProduto %i:\n\n ", i+1);
		printf("\n\nNome: %s", p->nome);
		printf("\nCodigo: %d", p->codigo);
		printf("\nQuantidade em estoque: %d", p->quantidade);
		printf("\nCusto por unidade: %.2f\n", p->custo);
		printf("\nQuantidade de venda por semana: %d", p->venda);
		printf("\n\n-----------------------------------------------------\n\n");
		p++;
	}
}

int remocao(struct produto *p, int produtoscadastrados, char *nomeprodutopararemocao)
{
	int i, l=0;
	for(i=0; i<produtoscadastrados; i++)
	{
		if(strcmp(nomeprodutopararemocao, p->nome)==0)
		{
			
				strcpy(p->nome,(p+i)->nome) ;
				p->codigo=(p+i)->codigo;
				p->quantidade=(p+i)->quantidade;
				p->custo=(p+i)->custo;
				p->venda=(p+i)->venda;
				l++;
				printf("\n\nRemocao feita\n\n");
		}
		p++;
	}
	if(l==0)
	{
		printf("\nDados nâo encontrado\n\n");
		return (0);
	}
	else
	{
		return (1);
	}
}
		

void buscaProduto(struct produto *p, int produtoscadastrados, char *nomeproduto)
{
	int i, k=0;
	for(i=0; i<produtoscadastrados; i++)
	{
		if(strcmp(nomeproduto, p->nome)==0)
		{
			printf("\n\nProduto encontrado\n\n");
			printf("\n\nNome: %s", p->nome);
			printf("\nCodigo: %d", p->codigo);
			printf("\nQuantidade em estoque: %d", p->quantidade);
			printf("\nCusto por unidade: %.2f\n", p->custo);
			k++;
		}
		p++;
	}
	if(k==0)
	{
		printf("\n\nProduto não encontrado\n\n");
	}
}
			
void alteracao(struct produto *p, int produtoscadastrados, char *nomeproduto)
{
	int i,k=0;
	for(i=0; i<produtoscadastrados; i++)
	{
		if(strcmp(nomeproduto, p->nome)==0)
		{
			printf("\nDigite o nome do produto: ");
			gets(p->nome);
			printf("\nDigite o codigo do produto: ");
			scanf("%d", &p->codigo);
			printf("\nDigite a quantidade no estoque: ");
			scanf("%d", &p->quantidade);
			printf("\nDigite o custo unitario: ");
			scanf("%f", &p->custo);
			printf("\nDigite a venda por semana: ");
			scanf("%d", &p->venda);
			k++;
		}
		p++;
	}
	if(k==0)
	{
		printf("\n\nProduto não foi encontrado\n\n");
	}
}


void vendasMaior(struct produto *p, int produtoscadastrados)
{
	int i, k, maior;
	char produto1[30];
	maior=p->venda;
	for(i=0; i<produtoscadastrados; i++)
	{	
		k=p->venda;
		if(k>maior)	
		{
			maior=k;
			strcpy(produto1, p->nome);
		}
		p++;
	}
	printf("\n\nProduto que mais vende: %s", produto1);
	printf("\nQuantidade: %d\n", maior);
}

	
void vendasMenor(struct produto *p, int produtoscadastrados)
{
	int i, k, menor;
	char produto1[30];
	menor=p->venda;
	for(i=0; i<produtoscadastrados; i++)
	{	
		k=p->venda;
		if(k<menor)	
		{
			menor=k;
			strcpy(produto1, p->nome);
		}
		p++;
	}
	printf("\n\nProduto que mais vende: %s", produto1);
	printf("\nQuantidade de venda por semana: %d\n", menor);
}


void unidadeVenda(struct produto *p, int produtoscadastrados, int quantvendas)
{
	int i, k=0;
	for(i=0; i<produtoscadastrados; i++)
	{
		if(p->venda<quantvendas)
		{
			printf("\n\nNome: %s", p->nome);
			printf("\nCodigo: %d", p->codigo);
			printf("\nQuantidade em estoque: %d", p->quantidade);
			printf("\nCusto por unidade: %.2f\n", p->custo);
			printf("\nVenda por semana: %d", p->venda);
			k++;
		}
		p++;
	}
	if(k==0)
	{
		printf("\n\nNenhum produto está abaixo de %d vendas\n\n", quantvendas);
	}
}

void gravacaoArquivoBinario(struct produto *p, int produtoscadastrados, char *nomearquivo)
{
	int i;
	FILE *f;
	f=fopen(nomearquivo, "wb");
	if(f==NULL)
	{
		printf("\n\nImpossivel abrir o arquivo\n\n");
		exit (1);
	}
	for(i=0; i<produtoscadastrados;i++)
	{
		if(fwrite(p, sizeof(struct produto), 1, f)!=1)
		{
			printf("\nErro de gravacao\n\n");
		}
		p++;
	}
	fclose(f);
}

void leituraBinario(struct produto *g, char *nomearquivo, int produtoscadastrados)
{
	int i;	
	FILE *f;
	f=fopen(nomearquivo, "rb");
	if(f==NULL)
	{
		printf("\n\nImpossivel abrir o arquivo\n\n");
		exit (1);
	}
	for(i=0;i <produtoscadastrados; i++)
	{
		if(fread(g, sizeof(struct produto), 1, f)!=1)
		{
			printf("\n\nErro de gravacao\n\n");	
		}
		g++;
	}
	fclose(f);
}	

int main()
{
	int l, k=0, n, j, alocacao;
	char *nomearquivo="ex32.bin", nome1Produto[30];
	struct produto *p, *g;
	FILE *f;
	
	f=fopen(nomearquivo, "wb");
	if(f==NULL)
	{
		printf("\n\nImpossivel abrir o arquivo\n\n");
		return 1;
	}
	printf("\n\nDigite o tamanho do vetor: ");
	scanf("%d", &alocacao);
	p=(struct produto*)malloc(alocacao * sizeof(struct produto));
	g=(struct produto*)malloc(alocacao * sizeof(struct produto));
	if(p==NULL || g==NULL)
	{
		printf("\n\nImpossviel alocar memoria\n\n");
		return 1;
	}
	
	do{
		printf("\n\n Opcao para produtos\n 1 - Inserir produto\n 2 - Retirar produto\n 3 - Buscar produto por nome\n 4 - Alterar produto\n 5 - Gerar relatorio\n 6 - Quem vendeu mais\n 7 - Quem vendeu menos\n 8 - Produtos que estao abaixo da meta\n 9 - Gravar em um arquivo binario\n 10 - Ler do arquivo binario\n 11 - Sair\n\n");
		scanf("%d", &n);
		switch(n){
				case 1:
					if(k<alocacao)
					{
						inclusao(p, k);
						k++;
					}
					else
					{
						printf("\n\nVetor cheio\n\n");
					}
					break;
				case 2:
				fgetc(stdin);
				printf("\n\nDigite o nome do produto para remover: ");	
				gets(nome1Produto);
				if(remocao(p, k, nome1Produto)==1)
				{
					k--;
				}
				break;
			
				case 3: 
				fgetc(stdin);
				printf("\n\nDigite o nome do produto para buscar: ");	
				gets(nome1Produto);
				buscaProduto(p, k, nome1Produto);
				break;
	
				case 4:
				fgetc(stdin);
				printf("\n\nDigite o nome do produto para alterar: ");	
				gets(nome1Produto);
				alteracao(p, k, nome1Produto);
				break;

				case 5:
				printf("\n\nRelatorio dos produtos: \n\n");
				relatorioProdutos(p, k);
				break;
	
				case 6:
				vendasMaior(p, k);
				break;


				case 7:
				vendasMenor(p, k);
				break;

				case 8:
				printf("\n\nDigite a meta  de vendas por semana: ");
				scanf("%d", &j);
				printf("\n\nProdutos abaixo da meta:\n\n");
				unidadeVenda(p, k, j);
				break;

				case 9:
				gravacaoArquivoBinario(p, k, nomearquivo);
				break;

				case 10:
				leituraBinario(g, nomearquivo, k);
				for(l=0; l<k; l++)
				{
					printf("\n\n-----------------------------------------------------\n\n");
					printf("\n\nProduto %d:\n\n ", l+1);
					printf("\n\nNome: %s", g->nome);
					printf("\nCodigo: %d", g->codigo);
					printf("\nQuantidade em estoque: %d", g->quantidade);
					printf("\nCusto por unidade: %.2f\n", g->custo);
					g++;
				}
				break;

				case 11:
				break;
		
				default:
				printf("\n\nErro\n\n");
			}
		}while(n!=11);
		fclose(f);
}
				
				
							









	
	
	