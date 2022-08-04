#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *p;
	int k=0;
	char letra;
	p=fopen("ex27.txt", "rt");
	if(p==NULL)
	{
		printf("\nImpossivel abrir o arquivo\n");
		return 1;  // ** Para ler, usamos return 1.
	}
	while(fscanf(p, "%c", &letra)!=EOF)
	{
		k++;
	}
	printf("\nQuantidade de letras no arquivo: %d", k);
	fclose(p);
}
