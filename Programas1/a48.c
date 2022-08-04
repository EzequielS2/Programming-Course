#include<stdio.h>
#include<string.h>

int main()
{	int i, soma=0, soma1=0, soma2=0, soma3=0, soma4=0;
	char x[100];
	printf("\n\nDigite uma string: "); 
	gets(x);
	for(i=0; i<strlen(x); i++)
	{	if(x[i]=='a' || x[i]=='A')
		{	soma++;
		}
		else if(x[i]=='e' || x[i]=='E')
		{	soma1++;
		}
		else if(x[i]=='i' || x[i]=='I')
		{	soma2++;
		}
		else if(x[i]=='o' || x[i]=='O')
		{	soma3++;
		}
		else if(x[i]=='u' || x[i]=='U')
		{	soma4++;
		}
	}
	printf("\n\nVogais encontradas: \n");
	if(soma>0)
	{	printf("A ou a");

	}
	if(soma1>0)
	{	printf("\nE ou e");
	}
	if(soma2>0)
	{	printf("\nI ou i");
	}
	if(soma3>0)
	{	printf("\nO ou o");
	}
	if(soma4>0)
	{	printf("\nU ou u");
	}
	printf("\nNuero de vezes que a vogal a aparece: %d", soma);
	printf("\nNuero de vezes que a vogal e aparece: %d", soma1);
	printf("\nNuero de vezes que a vogal i aparece: %d", soma2);
	printf("\nNuero de vezes que a vogal o aparece: %d", soma3);
	printf("\nNuero de vezes que a vogal u aparece: %d", soma4);
}