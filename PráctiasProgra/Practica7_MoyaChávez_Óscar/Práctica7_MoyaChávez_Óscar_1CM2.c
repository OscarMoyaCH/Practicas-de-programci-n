#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void array(char*);
void wrd(char*);
int ck(char*,char*);
void mostrar(char*,char*,int);

#define MAX 80
void main()
{
	char A[MAX],B[MAX];
	int numrep;
	
	array(A);
	wrd(B);
	numrep = ck(A,B);
	mostrar(A,B,numrep);
}

void array(char*A)
{
	printf("Introduce la cadena: ");
	scanf("%[^\n]", A);
	getchar();
}

void wrd(char*B)
{
	printf("Introduce la palabra: ");
	scanf("%[^\n]", B);
}

int ck(char*A,char*B)
{
	int i,c,w1,w2,w3,numrep,z,z1;
	char C[MAX],D[MAX],vd;
	
	vd=' ';
	w1=strlen(A);
	w2=strlen(A);
	z=0;
	numrep=0;
	
	for(i=0;i<w1;i++)
	{
		if(A[i]!=vd)
		{
			C[z]=A[i];
		}	
		z++;
		if(A[i]==vd)
		{
			w3=strlen(C);
			c=strcmp(C,B);
			if(c==0)
			{
				numrep++;
			}	
			z=0;
			
			for(z1=0;z1<w3;z1++)
			{
				C[z1]='\0';
			}
		}
	}
	return numrep;
}

void mostrar(char*A,char*B,int numrep)
{
	printf("La palabra es: %s\n", B);
	printf("El texto es: %s\n",A);
	printf("La palabra ocurrio %d veces",numrep);
}
