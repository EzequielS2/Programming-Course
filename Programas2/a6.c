#include<stdio.h>
#include<stdlib.h>
#define tam 3
struct aluno{
		int matricula;
		float n1, n2, media;
		char nome[30];
	}
alunos(struct aluno a[tam])
{
	int i;
	for(i=0; i<tam; i++)
	{
		printf("\n\nNome do aluno %d: %s", (i+1) a[i].nome);
		printf("\n\nMatricula do aluno %d: %d", (i+1), a[i].matricula);
		printf("\n\nMedia do aluno &d: %f\n\n", (i+1), a[i].media);
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
		printf("\n\n");
	}

}

int main()
{
	struct aluno c[tam];
	int i;
	for(i=0; i<tam; i++)
	{	printf("\n\nDigite o nome aluno %d: ", i+1);
		gets(c[i].nome);
		printf("\n\nDigite as duas notas do %d aluno: ", i+1);
		scanf("%f, %f", &c[i].n1, &c[i].n2);
		c[i].media=(c[i].n1+c[i].n2)/2.0;
		printf("\n\nDigite a matricula aluno %d: ", i+1);
		scanf("%d", &c[i].matricula);
		fgetc(stdin);
	}
	alunos(c);
}		
		
		