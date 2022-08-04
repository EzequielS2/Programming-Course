#include<stdio.h>
#include<string.h>

void polindromi(char a[30]);
void polindromi(char a[30])
{
	int i, j=0;
	char b[30];
	for(i=strlen(a)-1; i>=0; i--)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	if(strcmp(a,b)==0)
	{
		printf("\nA palavra %s e polindromi",a);
	}
	else
	{
		printf("\nA palavra %s nao e polindromi", a);
	}
	printf("\n\n%s", b);
}


int main()
{
	char e[30];
	printf("\nDigite uma palavra: ");
	gets(e);
	polindromi(e);
}
	