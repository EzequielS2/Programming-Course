#include<stdio.h>
#include<stdlib.h>
#define TAM 3

			// Se abrir leitura na main, eu tenho que fazer **p-- na main ou na funcao se eu for fazer qualquer coisa depois de ter lido na main.
			// nao é pra colocar p-- se eu fizer tudo dentro de funcao. Vai ser tudo **p++. 
struct nascimento
{
	int ano;
	char mes[30];
};

struct gado
{
	int codigo;
	float alimento, leite;
	char abate;
	struct nascimento a;
};


void leitura(struct gado *p)
{
	int i;
	for(i=0; i<TAM; i++)
	{
		printf("\nDigite o codigo de gado: ");
		scanf("%d", &p->codigo);
		printf("\nDiga a quantidade de leite por semanda por litro: ");		
		scanf("%f", &p->leite);
		printf("\nDiga a quantidade de alimento produzido por semana por kilo: ");
		scanf("%f", &p->alimento);
		printf("\nDigite o ano de nascimento: ");
		scanf("%d", &p->a.ano);
		fgetc(stdin);
		printf("\nDiga o mes de nascimento: ");
		gets(p->a.mes);
		if(2019-p->a.ano>=5)
		{
			p->abate='S';
		}
		else if(p->leite<40)
		{
			p->abate='S';
		}
		else if(p->leite>=50 && p->leite<=70 && p->alimento>50)
		{
			p->abate='S';
		}
		else
		{
			p->abate='N';
		}
		p++;
	}
}

void imprimir(struct gado *p)
{
	int i;
	for(i=0; i<TAM; i++)
	{
		printf("\n\n-------------------------------\n\n");
		printf("\n\nGado %d", i+1);
		printf("\nCodigo do gado: %d", p->codigo);
		printf("\nQuantidade de leite produzio por semana: %f", p->leite);
		printf("\nQuantidade de alimento produzido por semana: %f", p->alimento);
		printf("\nNascimento: mes - %s, ano - %d", p->a.mes, p->a.ano);
		printf("\nVai abater? %c", p->abate);
		p++;
	}
}



		

float quantidadeAlimento(struct gado *p)
{
	int i;
	float soma=0;
	for(i=0; i<TAM; i++)
	{
		soma=soma+p->alimento;
		p++;	
	}
	return (soma);
}

float quantidadeLeite(struct gado *p)
{
	int i;
	float soma=0;
	for(i=0; i<TAM; i++)
	{
		soma=soma+p->leite;
		p++;
	}
	return(soma);
}

float aposAbateLeite(struct gado *p)
{
	int i;
	float soma=0;
	
	for(i=0; i<TAM; i++)
	{
		if(p->abate=='N')
		{
			soma=soma+p->leite;
		}
		p++;
	}
	return (soma);
}

float aposAbateAlimento(struct gado *p)
{
	int i;
	float soma=0;
	
	for(i=0; i<TAM; i++)
	{
		if(p->abate=='N')
		{
			soma=soma+p->alimento;
		}
		p++;
	}
	return(soma);
}
	
		

int quantidadeAbate(struct gado *p)
{
	int i, k=0;
	
	for(i=0;i<TAM; i++)
	{
		if(p->abate=='S')
		{
			k++;
		}
		p++;
	}
	return(k);
}

int main()
{
	int k, j;
	float i;
	struct gado *p;
	p=(struct gado*)malloc(TAM * sizeof(struct gado));
	leitura(p);
	imprimir(p);
	do{
		printf("\n\n 1 - Quantidade total de leite produzido por semana\n 2 - Quantidade de alimento consumido por semana\n 3 - Quantidade de leite produzido por semana apos o abate\n 4 - Quantidade de alimento consumido apos o abate\n 5 - Numero de gados que vao para o abate\n 6 - Sair\n\n");
		scanf("%d", &k);
		switch(k)
		{
			case 1: 
			i=quantidadeLeite(p);
			printf("\nQuantidade de alimento produzido por semana : %f", i);
			break;
		
			case 2:
			i=quantidadeAlimento(p);
			printf("\nQuantidade de alimento produzido por semana : %f", i);
			break;

			case 3:
			i=aposAbateLeite(p);
			printf("\nQuantidade de leite produzido apos o abate: %f", i);
			break;
	
			case 4:
			i=aposAbateAlimento(p);
			printf("\nQuantidade de alimento produzido apos o abate: %f", i);
			break;

			case 5:
			j=quantidadeAbate(p);
			printf("\nQuantidade de gados que vao para o abate: %d", j);
			break;

			case 6:
			break;

			default:
			printf("\nDigite corretamente\n\n");
		}
	}while(k!=6);
}			























