#include<stdio.h>

int main()
{	int i, x, n, fatorial=1, soma=0, k, a;
	do{
		printf("\n\nMenu:\n\n 1 - Fatorial\n\n 2 - Somatoria\n\n 3 - Serie\n\n 4 - Perfeito\n\n 5 - Sair\n\n Opção: ");
		scanf("%d", &x);
		switch(x){
				case 1:
				printf("\n\nDigite um numero: ");
				scanf("%d", &n);
				fatorial=1;
				if(n>=0)
				{	for(i=1; i<=n; i++)
					{	fatorial = fatorial*i;
					}
				}
				printf("\n\nValor do fatorial:%d", fatorial);
				break;
				
				case 2:
				printf("\n\nDigite um numero: ");
				scanf("%d", &n);
				soma=0;
				if(n>0)
				{	for(i=1; i<=n; i++)
					{	soma = soma+i;
						
					}
				}
				printf("\n\nSoma ate n: %d", soma);
				break;
		
				case 3:
				printf("\n\nDigite um nmero: ");
				scanf("%d", &n);
				soma=0;
				k=1;
				a=n;
				if(n>0)
				{	for(i=0; i<n; i++)
					{	soma = soma+(k/a);
						k++;
						a--;
					}
				}
				printf("\n\nSerie: %f", (float) soma);
				break;

				case 4:
				printf("\n\nDigite um numero: ");
				scanf("%d", &n);
				soma=0;
				if(n>2)
				{	for(i=1; i<n; i++)
					{	if(n%i==0)
						{	soma = soma+i;
						}
					}
				}
				if(soma==n)
				{	printf("\n\nO numero %d e perfeito", n);
				}
				else
				{	printf("\n\nO numero %d nao e perfeito", n);
				}
				break;

				case 5:
				break;
				
				default:
				printf("\n\nDigite corretamente\n");
			}
	}while(x!=5);
}