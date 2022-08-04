#include<stdio.h>

int soma(int a, int b)
{
	int i, soma1=0;
	soma1=a+b;
	return soma1;
}
int main()
{
	int n, y;
	printf("\nDigite um numero: ");
	scanf("%d, %d", &n, &y);
	printf("Soma entre os numeros: %d", soma(n,y));
}
 