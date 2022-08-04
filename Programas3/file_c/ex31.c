#include<stdio.h>
#include<stdlib.h>
#define TAM 3

struct pessoa
{
	char nome[50], telefone[20];
	int idade;
	float altura;
};

	


int main()
{
	int i;
	struct pessoa *p, *j;
	FILE *f;
	p=(struct pessoa*)malloc(TAM * sizeof(struct pessoa));
	j=(struct pessoa*)malloc(TAM * sizeof(struct pessoa));
	if(p==NULL || j==NULL)
	{
		printf("\nAlocar memoria\n\n");
		return 1;
	}
	for(i=0; i<TAM; i++)
	{
		printf("\nDigite o nome: ");
		gets(p->nome);
		printf("\nDigite o telefone: ");
		gets(p->telefone);
		printf("\nDigite idade: ");
		scanf("%d", &p->idade);
		printf("\nDigite a altura: ");
		scanf("%f", &p->altura);
		p++;
		fgetc(stdin);
	}
	p--;
	printf("\n\nDados do registro: \n\n");
	for(i=0; i<TAM; i++)
	{
		printf("\n\n----------------------------------\n\n");
		printf("\nPessoa %d", i+1);
		printf("\nNome: %s\n", p->nome);
		printf("\nTelefone: %s", p->telefone);
		printf("\nIdade: %d", p->idade);
		printf("\nAltura: %f", p->altura);
		p--;
	}
	f=fopen("ex31.bin", "w+b");
	if(f==NULL)
	{
		printf("\nImpossivel abrir o arquivo\n\n");
		exit (1);
	}
	p++;
	for(i=0; i<TAM; i++)
	{
		if(fwrite(&p, sizeof(struct pessoa), 1, f)!=1) // Não pode esquecer &p.
		{
			printf("\nErro\n\n");
		}
		p++;
	}
	rewind(f);
	printf("\n\nDados Amrmazenado no arquivo binario: \n\n");
	printf("\n\n------------------------------------\n\n");
	for(i=0; i<TAM; i++)
	{
		if(fread(&j, sizeof(struct pessoa), 1, f)!=1)
		{
			printf("\n\nErro\n\n");
		}
		j++;
	}
	printf("\n\nDados Amrmazenado no arquivo binario: \n\n");
	printf("\n\n------------------------------------\n\n");
	j--; // **Quando eu ler em binario, basta eu voltar uma vez j-- para volatr para o comeco.
	for(i=0; i<TAM; i++)
	{
		printf("\nNome: %s\n", j->nome);
		printf("\nTelefone: %s\n", j->telefone);
		printf("\n\nIdade: %d", j->idade);
		printf("\n\nAltura: %f", j->altura);
		j++;
	}
	fclose(f);
	
}
		
	