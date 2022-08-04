#include<stdio.h>       //**Está certo, mas não pegou no Windows.**

int maiusculo(char A[30]);
int maiusculo(char A[30])
{
	int contador=0, i;
	for(i=0; i<30; i++)
	{
		if(A[i]>='A' && A[i]<='Z');
		{
			contador++;
		}
	}
	return(contador);
}

int main()
{
	char B[30];
	printf("\nDigite uma palvra: ");
	gets(B);
	printf("\nQuantidade de letras maiusculas na string: %d", maiusculo(B));
}
