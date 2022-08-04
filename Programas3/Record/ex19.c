#include<stdio.h>
#include<stdlib.h>
#define TAM 3

struct clientes
{

	char nome[60];
	float salario;
	int nascimento, carro;
};

int renda(struct clientes *n)
{
	int i, quant=0;	
	float media=0, soma=0;
	for(i=0; i<TAM; i++)
	{
		soma=soma+n->salario;
		n++;
	}
	n--;
	media=(float)soma/TAM;
	for(i=0; i<TAM; i++)
	{
		if(n->salario>media)
		{
			quant++;
		}
		n--;
	}
	return(quant);
}


int pessoasComCarro(struct clientes *n)
{
	int i, quant=0;
	for(i=0; i<TAM; i++)
	{
		if(n->carro==1)
		{
			quant++;
		}
		n++;
	}
	return(quant);
}

int nascimentoDeClientes(struct clientes *n)
{
	int i, quant=0;
	for(i=0; i<TAM; i++)
	{
		if(n->nascimento>=1965 && n->nascimento<=1980)
		{
			quant++;
		}
		n++;
	}
	return(quant);
}

int main()
{
	struct clientes *a;
	int quant1, quant2, quant3, i;
	a=(struct clientes*)malloc(TAM * sizeof(struct clientes));
	for(i=0; i<TAM; i++)	
	{
		printf("\nDigite o nome: ");
		gets(a->nome);
		printf("\nDigite o salario: ");
		scanf("%f", &a->salario);
		printf("\nDiga o ano de nascimento: ");
		scanf("%d", &a->nascimento);
		printf("\nDiga se tem carro (sim para 1 e nao para 0): ");
		scanf("%d", &a->carro);
		fgetc(stdin);
		a++;
	}
	a--; // tem que colocar a--, pois ele vai voltar no ultimo termo.
	printf("\nCliesntes: \n\n");
	for(i=0; i<TAM; i++)
	{
		printf("\nNome: %s\n", a->nome);
		printf("\nSalario: %f\n", a->salario);
		printf("\nData de Nascimento: %d\n", a->nascimento);
		if(a->carro==1)
		{
			printf("\n Possui carro\n");
		}
		else
		{
			printf("\n Nao possui carro\n");
		}
		printf("--------------------------------------");
		a--;   // **tem que ser a--, pois ele não está mais no a[0]
	}

	a++; // É para voltar para a[0], pois no fim do for anteiror ele ficou a[-1];

	quant1=renda(a);
	quant2=pessoasComCarro(a);
	quant3=nascimentoDeClientes(a);
	printf("\nPessoas com o salario acima da media: %d", quant1);
	printf("\nQuantidade de pessoas com carro: %d", quant2);
	printf("\nQuantidade de clientes com idade entre 1965 e 1980: %d", quant3);
}




