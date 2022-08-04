#include<stdio.h>

struct aluno{
		int matricula;
		float n1, n2, media;
		char nome[30];
	}

void alunos(struct aluno a[])
{
	int i;
	for(i=0; i<3; i++)
	{
		printf("\n\nNome do aluno (i+1): %s", a[i].nome);
		printf("\n\nMatricula do aluno (i+1): %d", a[i].matricula);
		printf("\n\nMedia do aluno (i+1): %f\n\n", a[i].media);
		if(a[i].media>6.0)
		{
			printf("\n\nAprovado\n\n");
		}
		else if(a[i].media>=4.0 && a[i].media<6.0)
		{
			printf("\n\nVR\n\n");
		}
		else
		{
			printf("\n\nReprovado\n\n");
		}
	}


	printf("\n\n");
}

int main()
{
	struct aluno c[3];
	int i;
	for(i=0; i<3; i++)
	{	printf("\n\nDigite o nome: ");
		gets(c[i].nome);
		printf("\n\nDigite as duas notas do 1 aluno: ");
		scanf("%f, %f", &c[i].n1, &a[i].n2);
		c[i].media=(c[i].n1+c[i].n2)/2.0;
		printf("\n\nDigite a matricula: ");
		scanf("%d", &c[i].matricula);
		fgetc(stdin);
	}
	alunos(c);
}		
		
		