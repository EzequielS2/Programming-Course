#include<stdio.h>

int main()
{
	int *q, b, k;
	b=10;
	q=&b;
	k=*q+10;
	printf("\n\nValor de k: %d", k);
	printf("\n\nPosicao de p: %p", &q);
	printf("\n\nValor de p: %p", *q);
}