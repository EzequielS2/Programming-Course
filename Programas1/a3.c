#include<stdio.h>

int main()
{	int matricula, i, aluno;
	float media, soma=0, v1, v2;
	for(aluno=1; aluno<=15; aluno++)
	{	printf("\n\nNotas do aluno %d", aluno);
		printf("\n\nDigite a nota da v1: ");
		scanf("%f", &v1);
		printf("\n\nDigite a nota da v2: ");
		scanf("%f", &v2);
		printf("\n\nMedia do aluno %d: %f", aluno, (float) (v1+v2)/2.0);
		soma = soma + v1+v2;
	}
	printf("\n\nMedia total da turma: %f", (float) soma/15.0);
}