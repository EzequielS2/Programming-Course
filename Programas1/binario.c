#include<stdio.h>
#include<math.h>

int main()
{	int binario, soma=0, k=0;
	printf("\n\nDigite um numero binario: ");
	scanf("%d", &binario);
	while(binario>0)
	{	soma = soma+binario%10*pow(2,k);
		binario=binario/10;
		k++;
	}
	printf("\n\nNumero em decimal: %d", soma);
}