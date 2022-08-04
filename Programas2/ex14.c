#include<stdio.h>

int binario(int decimal);
int binario(int decimal)
{
	int A[100], i=0, j;
	while(decimal>0)
	{
		A[i]=decimal%2;
		decimal=decimal/2;
		i++;
	}
	printf(" Em binario: ");
	for(j=i-1; j>=0; j--)
	{
		printf("%d", A[j]);
	}
}

int main()
{
	int n;
	printf("\nDigite um numero Dcimal: ");
	scanf("%d", &n);
	binario(n);
}
		