#include<stdio.h>
#include<string.h>

int main()
{	int i, j;
	char x[100], y[100];
	printf("Digite uma string: ");
	gets(x);
	j = strlen(x)-1;
	for(i=0; i<strlen(x); i++)
	{	y[j]=x[i];
		j--;
	}
	y[strlen(x)-1]='\0';
	if(strcmp(x,y)==0)
	{	printf("\n\nA palavra e polindromi\n\n");
	}
	else
	{	printf("\n\nA palavra nao e polindromi\n\n");
	}
}