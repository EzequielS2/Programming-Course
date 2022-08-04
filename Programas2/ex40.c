#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int tamanho(char a[20]);
void iguais(char a[20], char b[20]);
char *copiar(char a[20], char b[20]);
char *concatenar(char *a, char *b);

int main()
{
	char y[60], x[30], z[30];
	printf("\n\nDigite um apalvra para y: ");
	gets(y);
	printf("\n\nDigite uma palavra para x: ");
	gets(x);
	printf("\nTamanho de x: %d\n\n", tamanho(x));
	iguais(y, x);
	printf("\n\nVetor x em z: %s\n\n", copiar(z, x));
	printf("\n\nVetores concatenado: %s\n\n", concatenar(y, x));
	
}



int tamanho(char a[20])
{
	int cont=0, i;
	for(i=0; a[i]!='\0'; i++)
	{
		cont++;
	}
	return(cont);
}

void iguais(char a[20], char b[20])
{
	int i, quant=0;
	if(tamanho(a)==tamanho(b))
	{
		for(i=0; i<tamanho(a); i++)
		{
			if(a[i]!=b[i])
			{
				quant++;
			}
		}
	}
	else
	{
		printf("\n\nSao diferentes\n\n");
	}
	if(quant==0)
	{
		printf("\nSao iguais\n");
	}
	else
	{
		printf("\n\nSao diferentes\n");
	}
}


char *copiar(char *a, char *b)
{
	int i;
	for(i=0; i<tamanho(b); i++)
	{
		a[i]=b[i];
	}
	a[i]='\0';
	return (a);
}

char *concatenar(char *a, char *b)
{
   int i;
   for(i=0; a[i]!='\0'; ++i) //Percorre toda a string_a, para saber o tamanho da mesma
   {
   }
   for(int j=0; b[j]!='\0'; ++j) //Percorre toda a string_b, para concatena-la
   {
      a[i]=b[j];
      i++;
   }
   a[i]='\0';
   return(a);
}
		
	