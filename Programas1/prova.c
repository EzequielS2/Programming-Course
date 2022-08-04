#include<stdio.h>
#include<string.h>
#define tam 100

int main()
{	int i, k, j, tamanho, quant; 
	char x[tam], y[tam], letra;
	printf("\n\nDigite uma string: ");
	gets(x);
	do{
		printf("\n\nMenu:\n\n 1 - String lida\n 2 - O numero de caracteres\n 3 - Testar caractere na string\n 4 - Calcular a quantidade de palavras na string\n 5 - Copiar a string lida em outra string\n 6 - Inverter a string lida em outra string\n 7 - Sair\n\n Opcao: ");
		scanf("%d", &k);
		switch(k){
				case 1:
				printf("\nString lida: %s\n\n", x);
				break;

				case 2:
				printf("\nNumero de caracteres na string: %d\n\n", strlen(x));
				break;

				case 3:
				printf("\n\nDigite uma letra: ");
				fgetc(stdin);
				scanf("%c", &letra);
				quant=0;
				for(i=0; i<strlen(x); i++)
				{	if(x[i]==letra)
					{	quant++;
					}
				}
				printf("\n\nQuantidade de vezes que a letra %c aparece na string: %d\n\n", letra, quant);
				break;

				case 4:
				quant=1;
				for(i=0; i<strlen(x); i++)
				{	if(x[i]==' ')
					{	quant++;
					}
				}
				printf("\n\nQuantidade de palvras na string: %d\n\n", quant);
				break;

				case 5:
				strcpy(y,x);
				printf("\n\nString que recebeu a copia: %s\n\n", y);
				break;

				case 6:
				j=strlen(x)-1;
				for(i=0; i<strlen(x); i++)
				{	y[j]=x[i];
					j--;
				}
				y[i]='\0';
				printf("\n\nString invertida em outra string: %s\n\n", y);
				break;

				case 7:
				break;
		
				default:
				printf("\n\nDigite corretamente");
			}
		}while(k!=7);
}