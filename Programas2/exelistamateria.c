#include<stdio.h>
#include<stdlib.h>    // criar uma funcao para cada menu***

struct aluno
{
	char nome[30];
	int matricula;
	float p1, p2, p3, media;
};

void lei(struct aluno *p, int m)
{
	int k;
	for(k=0; k<m; k++)
	{
		fgetc(stdin);
		printf("\n\nDigite o nome: ");
		gets(p->nome);
		printf("\n\nDigite a matricula: ");
		scanf("%d", &p->matricula);
		printf("Digite a notas da p1, p2, p3: ");
		scanf("%f, %f, %f", &p->p1, &p->p2, &p->p3);
		p->media=(p->p1+p->p2+p->p3)/3.0;
		p++;
		fgetc(stdin);
	}
}

void impressao(struct aluno *p, int m)
{
	int  k;
	for(k=0; k<m; k++)
	{
		printf("\n\nAluno: %d\n\n Nome: %s\n\n", k+1, p->nome);
		printf("\n\nMatricula: %d ", p->matricula);
		printf("\n\nNotas da p1: %f, p2: %f, p3:%f, media: %f \n\n", p->p1, p->p2, p->p3, p->media);
		p++;
	}

}
void aprovados(struct aluno *p, int m)
{
	int k;
			for(k=0; k<m; k++)
 			{
 				if(p->media>=6.0)
 				{
 					printf("\nAluno: %d\n", k+1);
 					printf("\n\nAprovado\n\n");
 				}
				p++;
 			}
}

void reprovados(struct aluno *p, int m)
{
			int k, n=0;
			for(k=0; k<m; k++)
 			{
 				if(p->media<6.0)
 				{
 					printf("\n\nAluno %d\n", k+1);
 					printf("\n\nReprovado\n\n");
 				}
				n++;
				p++;
 			}
			if(n==0)
			{
				printf("\n\nNao tem reprovados\n\n");
			}
}

void busca(struct aluno *p, int m)
{
	int ma, k;
	printf("\n\nDigite a matricula que quer buscar: ");
	scanf("%d", &ma);
	for(k=0; k<m; k++)
	{
		if(p->matricula==ma)
		{
			printf("\n\nMatricula encontrada: ");
			printf("\n\nNome do aluno: %s\n\n", p->nome);
		}
		p++;
	}

}

void media(struct aluno *p, int m)
{
	int k;
	float med, soma=0;
	for(k=0; k<m; k++)
	{
		soma= soma+p->p1+p->p2+p->p3;
		p++;
	}
	med=(float)soma/3.0*m;
	printf("\n\nMedia da turma: %f", med);	

}



int main()
{
	struct aluno *t;
	int m, i, k;
	printf("\n\nDigite o tamnho do vetor: ");
	scanf("%d", &m);
	t=(struct aluno*)malloc(m * sizeof(struct aluno));
	if(t==NULL)
	{
		printf("\n\nImpossivel alocar memoria\n\n");
		return 1;
	}
	lei(t, m);
	do{
		printf("\n\nMenu: \n  1 - imprimir turma \n 2 - Imprime aprovado \n 3 - Imprime reprovado \n 4 - Buscar uma matricula \n 5 - Calcula media da turma \n 6 - Sair\n\n");
		scanf("%d", &i);
		switch(i)
		{
			case 1:
 			impressao(t, m);
 			break;
 			
 			case 2:
			aprovados(t, m);
 			break;
 			
 			case 3:
 			reprovados(t, m);
 			break;
 			
 			case 4:
			busca(t, m);
 			break;
	
			case 5:
			media(t, m);
			break;
			
			case 6:
			break;

			default:
			printf("\nDigite corretamente\n\n");
		}
	}while(i!=6);

}