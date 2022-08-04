#include<stdio.h>
#include<stdlib.h>  
			// ** Para fprintf, sputs ou putc usamos para preencher o arquivo txt.

			// ** Para fscanf, fgets ou getc usamos para imprimir na tela o que já está no arquivo txt.
int main()
{			// No fprintf podemos colocar \n dentro do registro direto. fprintf(arq, "%s %d\n", t, n);
			// No fputs fazemos por partes(Liha por linha).  fputs(texto, arq); depois fputs("\n", arq); ** Só serve pra texto(Pode ter número no texto).
	int n;
	char texto[50];
	FILE *arq;
	arq=fopen("dados.txt", "r");
	while(!feof(arq))
	{
		fgets(texto, 50, arq); // O fscanf só lê string por string e não o texto.
					// Exemplo: "Maria da silva" - (fscanf só lê Maria primeiro na string texto)
		printf("%s\n", texto); // Sempre que ler devemos colocar \n para imrpimir linha por linha.
	}
	fclose(arq);
}





	