#include<stdio.h>
#include<stdlib.h>

void insere1(char *nomearquivo, char *texto)
{
	FILE *p;
	p=fopen(nomearquivo, "a");
	fputs(texto, p);
	fclose(p);
}

void insere2(char *nomearquivo, float num)
{
	FILE *p;
	p=fopen(nomearquivo, "a");
	fprintf(p, "%f", num);
	fclose(p);
}

void imprime1(char *nomearquivo)
{
	FILE *p;
	char s[100];
	float m;
	p=fopen(nomearquivo, "rt");
	if(p==NULL)	
	{
		printf("\nImpossivel abrir o arquivo");
		return;
	}
	while(!feof(p))
	{
		fgets(s, 100, p);
		printf("%s\n ", s);
		fscanf(p, "%f", &m);
		printf("\n%f\n", m);
	}
	fclose(p);
}

void imprime2(char *nomearquivo)
{
	FILE *pa;
	int z[20];
	int i;
	pa=fopen(nomearquivo, "rb");
	if(pa==NULL)
	{
		printf("Impossivel abrir o arquivo");
		return;
	}
	fread(z, sizeof(int), 20, pa); // não precisa fazer while para arquivo binario. Esse comando já passa tudo.
	
	// O outro fwrite tambem passa tudo.

	for(i=0; i<20; i++)
	{
		printf("%d\t", z[i]);
	}
	printf("\n\n");
	fclose(pa);
}
	
int main()
{
	int i, a[20];
	char nome1[100], nome2[100], texto[1000];
	float num;
	FILE *p, *u;
	printf("\nDigite o nome do arquivo");
	gets(nome1);
	printf("\nDigite um texto: ");
	gets(texto);
	p=fopen(nome1, "wt");
	insere1(nome1, texto);
	for(i=0; i<10; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%f", &num);
		insere2(nome1, num);
	}
	fgetc(stdin);
	printf("\nDiga qual o nome do arquivo binario: ");
	gets(nome2);
	u=fopen(nome2, "wb");
	for(i=0; i<20; i++)
	{
		printf("\nDigite um numero inteiro: ");
		scanf("%d", &a[i]);
	}
	fwrite(a, sizeof(int), 20, u);   // Não precisa for e nem while para arquivo binario. Ele passa os 20 elementos de uma só vez.
	// imprimir o que está dentro dos arquivos.
	fclose(u);
	u=fopen(nome2, "rb");
	printf("Arquivo %s:\n\n ", nome1);
	imprime1(nome1);
	printf("\n\n");
	printf("Arquivo %s: \n\n", nome2);
	imprime2(nome2);
	printf("\n\n");
}
	
		
	












	