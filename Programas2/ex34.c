#include<stdio.h>
#include<string.h>

void ocorrencia(char q[10], char n);
int main()
{	
	int i;
	char a, d[10];
	printf("\nDigite uma letra: ");	
	scanf("%c", &a);
	fgetc(stdin);
	printf("Digite uma palavra: ");
	gets(d);
	ocorrencia(d, a);
}

void ocorrencia(char a[10], char n)
{
	int i;
	for(i=0; i<strlen(a);i++)
	{
		if(a[i]==n)
		{
			a[i]=' ';
		}
	}
	printf("\nVetor modificado: %s", a);
}

	