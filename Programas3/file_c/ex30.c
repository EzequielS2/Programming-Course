#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *p;
	int i;
	char nome[30], nome2[30], nome3[30];
	float p1, p2, soma;
	p=fopen("ex30.txt", "rt");
	if(p==NULL)	
	{
		printf("\nImpossivel abrir o arquivo\n\n");			
		return 1;
	}
	fscanf(p, "%s %f %f", nome, &p1, &p2);

	 //**Usei uma forma esperta para "burlar". Li a primeira linha
	 // **A primeira linha sai da leitura para impressao.
	// **Tive que "eliminar" a primeira linha, pois so tem uma string e um numero. Por isso dá problema.

	while(fscanf(p, "%s %f, %f", nome, &p1, &p2)!=EOF) // Tem que colocar igual ao que esta no arquivo. nome nota1, nota2.
	{
		
			if((p1+p2)/2.0>=6.0)
			{
				printf("\nNome: %s , nota: p1- %.2f p2- %.2f\n\n", nome, p1, p2);
				soma=soma+p1+p2;
			}	
	}
	printf("\n\nSoma das notas: %.2f, Media das notas: %.2f\n\n", soma, (soma)/4.0);
	fclose(p);
}
