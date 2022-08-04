#include<stdio.h>
#include<stdlib.h>
char *remov(char *a, char n)
{
	int i, j, k;
	for(i=0; a[i]!='\0'; i++)
	{
	}
	for(j=0; j<i; j++)
	{
		if(a[j]==n)
		{
			for(k=j; k<i; k++)
			{
				a[k]=a[k+1];
			}
		}
	}
	return(a);
}

int main()
{
	char b[30], h;
	printf("\n\nDigite uma palavra: ");
	gets(b);
	printf("\n\nDigite a letra que quer eliminar: ");
	scanf("%c", &h);
	printf("\n\nString modificada: %s", remov(b, h));
}