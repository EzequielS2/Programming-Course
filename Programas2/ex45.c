#include<stdio.h>
#include<math.h>
int main()
{
	int binario, binario1, dec=0, dec1=0, soma, soma1, bina[1000], k=0, i;
	printf("\n\nDigite dois numeros binarios: ");
	scanf("%d, %d", &binario, &binario1);
	while(binario>0)
	{
		dec=dec+(binario%10)*pow(2, k);
		binario=binario/10;
		k++;
	}
	k=0;
	while(binario1>0)
	{
		dec1=dec1+(binario1%10)*pow(2, k);
		binario1=binario1/10;
		k++;
	}
	soma=dec1+dec;
	soma1=dec1+dec;
	k=0;
	while(soma1>0)
	{	
		bina[k]=soma1%2;
		soma1=soma1/2;
		k++;
	}
	printf("\n\n %d em decimal: %d \n\n %d em decimal: %d\n\n", binario, dec, binario1, dec1);
	printf("\n\nSoma em binario: ");
	for(i=k-1; i>=0; i--)
	{
		printf("%d", bina[i]);
	}
	printf("\n\nSoma em decimal: %d\n\n", soma);
}

		