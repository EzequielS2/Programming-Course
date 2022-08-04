#include<stdio.h>
#include<math.h>

int main()
{	int n, i, k, soma, x, contador, fatorial=1;
	do{	
		printf("Menu: \n\n 1 - Numero perfeito\n\n 2 - Numero Primo\n\n 3 - Fatorial\n\n 4 - Sair\n\n Diga a opcao: ");
		scanf("%d", &x);
		switch(x){
				case 1:
				printf("\n\nDigite um numero: ");
				scanf("%d", &n);
				soma = 0;
				k=1;
				if(n>2)
				{	for(i=1; i<n; i++)
					{	if(n%k==0)
						{	soma = soma + k;
						}
						k = k+1;
					}
					if(soma==n)
					{	printf("\n O numero %d e perfeito\n\n", n);
					}
					else
					{ printf("\n\n O numero %d nao e perfeito \n\n", n);
					}
					printf("\n\n");
				}
				break;

				case 2: 
				printf("\n\nDigite um numero: ");
				scanf("%d", &n);
				contador = 0;
				k=2;
				if(n>=2)
				{	for(i=2; i<n; i++)
					{	if(n%k==0)
						{	contador++;
						}
						k++;
					}
					if(contador==0)
					{	printf("\n\nO nume %d é primo", n);
					}
					else
					{	printf("\n\nO numero %d não é primo", n);
					}
					printf("\n\n");
				}
				break;

				case 3:
				printf("\n\nDigite um numero: ");
				scanf("%d", &n);
				k=1;
				fatorial = 1;
				if(n>=0)
				{	for(i=0; i<n; i++)
					{	fatorial = fatorial*k;
						k++;
					}
					printf("\n\nFatorial: %d", fatorial);
					printf("\n\n");
				}
				break;

				case 4:
				break;

				default:
				printf("\n\nDigite corretamente\n\n");
		       }
	}while(x!=4);
}