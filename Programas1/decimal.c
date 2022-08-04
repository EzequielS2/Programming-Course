#include<stdio.h>
#include<math.h>

int main()
{	int decimal, x[100], i=0, j;
	printf("\n\nDigite um numero decimal: ");
	scanf("%d", &decimal);
	while(decimal>0)
	{	x[i]=decimal%2;
		decimal = decimal/2;
		i++;
	}
	printf("\n\nNumero em binario: ");
	for(j=i-1; j>=0; j--)
	{	printf("%d", x[j]);
	}
	printf("\n\n");
}