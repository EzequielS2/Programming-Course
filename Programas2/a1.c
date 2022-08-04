#include<stdio.h>

int imprimir(int n, char k)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%c\n", k);
	}
}
int main()
{
	imprimir(30, '*');
	printf("\nE so um teste\n\n");
}