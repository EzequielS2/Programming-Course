#include<stdio.h>
#include<stdlib.h>
#define TAM 3

struct aluno
{
	char nome[30];
	int matricula;
	float media;
};

float mediaTurm(struct aluno *a)
{
	int i;
	float media1=0;
	for(i=0; i<TAM; i++)
	{
	 	media1=media1+(a->media);
		a++;
	}
	media1=(float)media1/3.0;
	printf("\nMedia da turma: %f", media1);
	return(media1);
}

void acimaMedia(struct aluno *a, float mediaTurma)
{
	int acimamedia=0, i;	
	for(i=0;i<TAM; i++)
	{
		if(a->media>mediaTurma)
		{
			acimamedia++;
		}
		a++;
	}
	printf("\nQuantidade de pessoas acima da media: %d", acimamedia);
}

void alunoIdentificar(struct aluno *a, float mediaTurma)
{
	int i;
	printf("\nAlunos acima da media: \n\n");
	for(i=0; i<TAM; i++)
	{
		if(a->media>mediaTurma)
		{
			printf("\nNome: %s, Matricula: %d\n", a->nome, a->matricula);
		}
		a++;
	}
}
		
void alunoIdentifi(struct aluno *a, float mediaTurma)
{
	int i;
	printf("\nAlunos abaixo da media: \n");
	for(i=0; i<TAM; i++)
	{
		if(a->media<mediaTurma)
		{
			printf("\nNome: %s, Matricula: %d\n", a->nome, a->matricula);
		}
		a++;
	}
}

void matriculaAbaixoMedia(struct aluno *a, float mediaTurma)
{
	int i;
	printf("\nMatricula dos alunos abaixo da media: \n");
	for(i=0; i<TAM; i++)
	{
		if(a->media<mediaTurma)
		{
			printf("\nMatricula: %d\n", a->matricula);
		}
		a++;
	}
}

void imprimir(struct aluno *a)
{
	int i;
	for(i=0; i<TAM; i++)
	{
		printf("Nome: %s, Matricula: %d", a->nome, a->matricula);
		printf("\nMedia: %f\n", a->media);
		a++;
	}
}


int main()
{
	struct aluno *a;
	int i;
	float media1;
	a=(struct aluno*)malloc(TAM * sizeof(struct aluno));
	for(i=0;i<TAM; i++)
	{
		printf("\nDIgite o nome: ");
		gets(a->nome);
		printf("\nDigite a matricula: ");
		scanf("%d", &a->matricula);
		printf("\nDigite a media: ");
		scanf("%f", &a->media);
		fgetc(stdin);
		a++;
	}
	media1=mediaTurm(a);
	imprimir(a);
	acimaMedia(a, media1);
	alunoIdentificar(a, media1);
	alunoIdentifi(a, media1);
	matriculaAbaixoMedia(a, media1);
}
	
	
