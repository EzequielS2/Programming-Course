#include<stdio.h>
#include<string.h>

int main()
{	int i, j;
	char x[100], y[100];
	printf("Digite uma string: ");
	gets(x);
	printf("\n\nString Lida: %s", x);
	j = strlen(x)-1;
	for(i=0; i<strlen(x); i++)
	{	y[j]=x[i];
		j--;
	}
	printf("\n\nString inversa: %s\n\n", y);
}
