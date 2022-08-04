#include<stdio.h>
#include<stdlib.h>    // criar uma funcao para cada menu***

float valor(int *v1, int *v2, int tam, int *maior, int *menor, int *soma, float *media)
{
	int i;
	maior=*(v1);
	for(i=0; i<tam; i++)
	{
		if(*(v1+i)>*maior)
		{
			*maior=*(v1+i);
		}
	}
	*menor=*(v2);
	for(i=0; i<tam; i++)	
	{
		if(*(v2+i)<*menor)
		{
			*menor=*(v2+i);
		}
	}	
	*soma=0;	
	for(i=0; i<tam; i++)
	{
		*soma=*soma+*(v1+i)+*(v2+i);
	}
	for(i=0; i<tam; i++)	
	{
		*(media+i)=(*(v1+i)+*(v2+i))/2.0;
	}
	printf("Maior: &d, Menor: %d", *maior, *menor);
	return (media);
}

int main()
{
	int tam1, *v1, *v2, maior1, menor1, soma1, i;
	float *media1;
	printf("\n\nDigite o tamanho do vetor: ");
	scanf("\n\n%d", &tam1);
	v1=(int *)malloc(tam1 * sizeof(int));
	v2=(int *)malloc(tam1 *  sizeof(int));
	media1=(float *)malloc(tam1 * sizeof(float));
	for(i=0; i<tam1; i++)
	{
		printf("\n\nDigite um numro: ");
		scanf("%d", *(v1+i));
		printf("\n\nDigite outro numero: ");
		scanf("%d", *(v2+i));
	}
	
	}
	valor(v1, v2, tam1, maior1, menor1, soma1, media1);

}

