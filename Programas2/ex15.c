#include<stdio.h>

int menor(int V[20]);
int menor(int V[20])
{
	int i, menor;
	menor=V[0];
	for(i=0; i<20; i++)
	{
		if(V[i]<menor)
		{
			menor=V[i];
		}
	}
	return(menor);
}

int main()
{
	int B[20], i;
	for(i=0; i<20; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%d", &B[i]);
	}
	printf("Menor elemento do vetor: %d", menor(B));
} 