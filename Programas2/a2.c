#include<stdio.h>
#include<math.h>

float soma(float x, float y)
{	
	return(x+y);
}
float subtracao(float x, float y)
{	return(x-y);
}
float multiplicacao(float x, float y)
{	return(x*y);
}
int main()
{
	float a, b;
	printf("\nDigite dois numeros: ");
	scanf("%f, %f", &a, &b);
	printf("\n\nFuncoes criadas:\n\n");
	printf("1: resultado: %f\n\n", sqrt(multiplicacao(a, b)+soma(a, b)));
	printf("2: Resultado: %f\n\n", pow (multiplicacao(pow (soma(a, b), 2), pow (subtracao(a, b), 2)), 2));
	printf("3: Resultado: %f\n\n", pow (soma(subtracao(a, b), multiplicacao(a, b)), 2));
}