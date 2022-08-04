#include<stdio.h>
#include<stdlib.h>
#define TAM 100

			// Se abrir leitura na main, eu tenho que fazer **p-- na main ou na funcao se eu for fazer qualquer coisa depois de ter lido na main.
			// nao é pra colocar p-- se eu fizer tudo dentro de funcao. Vai ser tudo **p++. 
struct conta
{
	int numeroconta;
	float saldo;
};


struct cliente
{
	char nome[40], telefone[40], endereco[30];
	int numeroc;
	struct conta a;
};

int teste(struct cliente *p, int numero1)
{
	int k, t=0;
	for(k=0; k<TAM; k++)
	{
		if(p->numeroc==numero1)
		{
				t++;
		}
		p++;
	}
	return (t);
}




void clientes(struct cliente *p)
{
	int numero;
	printf("\nDiga o numero do cliente: ");
	scanf("%d", &numero);
	if(teste(p, numero)==0)
	{
		
			printf("\nCliente nao cadastrado\n\n");
			fgetc(stdin);
			printf("\nDigite o nome: ");
			gets(p->nome);
			printf("\nDiga o telefone: ");
			gets(p->telefone);
			printf("\nDiga qual endereco: ");
			gets(p->endereco);
			printf("\nDiga o numero da conta: ");
			scanf("%d", &p->a.numeroconta);
			printf("\nDiga Saldo: ");
			scanf("%f", &p->a.saldo);
			printf("\nDiga qual o numero do cliente cadastrar: ");
			scanf("%d", &p->numeroc);
			fgetc(stdin);
				
	}
	else
	{
		printf("\nCliente ja cadastrado\n\n");
	}
}			

int main()
{
	int i, k, numero;
	struct cliente *p;
	p=(struct cliente*)malloc(TAM * sizeof(struct cliente));
	for(i=0; i<TAM; i++)
	{
		clientes(p);
	}
}	









