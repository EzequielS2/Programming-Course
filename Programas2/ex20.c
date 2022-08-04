#include<stdio.h>    //**Esta certo, mas não esta pegando no Windows.**

char conceito(float media);

char conceito(float media)
{
	char conceit;
	if(media>=0 && media<=4.9)
	{
		conceit='D';
	}
	else if(media>=5 && media<=6.9)
	{
		conceit='C';
	}
	else if(media>=7.0 && media<=8.9);
	{
		conceit='B';
	}
	else
	{
		conceit='A';
	}
	return(conceit);
}


int main()
{
	float media1;
	printf("Digite a media final: ");
	scanf("%f", &media1);
	printf("Conceito da media: %c", conceito(media1));
}
