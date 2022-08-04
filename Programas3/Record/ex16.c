#include<stdio.h>


struct Vetor
{
	float x;
	float y;
	float z;
};

int main()
{
	struct Vetor p;

	printf("\nDigite o valor de X:");
	scanf("%f", &p.x);
	printf("\nDigite o valor de Y:");
	scanf("%f", &p.y);
	printf("\nDigite o valor de Z:");
	scanf("%f", &p.z);	
	printf("(x, y, z) = (%f, %f, %f)", p.x, p.y, p.z);
	printf("Soma: %f", p.x+p.y+p.z);
}