#incldeu<stdio.h>
#include<ctype.h>                       //**Tentar depois**, não pegou**

char string(char A[30]);
char string(char A[30])
{
	int i;
	for(i=0; i<30; i++)
	{
		if(A[i]>='A' && A[i]<='Z')
		{
			A[i]=tolower(A[i]);
		}
		else if(A[i]>='a' && A[i]<='z')
		{
			A[i]=toupper(A[i]);
		}
	}
	return(A);
}

int main()
{
	char B[30];
	printf("\nDigite uma palvra: ");
	gets(B);
	printf("\nString modificada: %s", string(B));
}