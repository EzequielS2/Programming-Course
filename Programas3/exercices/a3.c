#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *p;
	int i, n, k=0, num;
	float media=0;
	p=fopen("numeros.txt", "rt");
	if(p==NULL)
	{
		printf("\nImpossivel abrir o arquivo");
		return 1;
	}
	for(i=0; i<3; i++)
	{
		printf("\nGrupo %d: ", i+1);
		fscanf(p, "%d", &n);
		num=n;
		printf("%d\t", n);
		media=media+n;
		for(k=0; k<num; k++)
		{
			// Tem que usar fscanf(p, "%d", &n)!=EOF, ou seja, até que chegue ao fim.
			
			if(fscanf(p, "%d", &n)!=EOF)
			{	printf("%d\t", n);
			}	media=media+n;	
		}
		printf("\nMedia do grupo %d: %.2f\n",i+1, (float)media/num);
		media=0;
	}	
	fclose(p);
}



	