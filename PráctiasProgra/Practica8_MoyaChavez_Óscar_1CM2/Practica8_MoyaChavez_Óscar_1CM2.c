#include <stdio.h>
#include<stdlib.h>
#define FIL 10
#define COL 10
void cf(int*, int*);
void llenarMTZ( char R[FIL][COL], int, int);
void op(char R[FIL][COL], char B[FIL][COL], int, int);
void mostrar( char B[FIL][COL], int, int);

void main(){
  char R[FIL][COL], B[FIL][COL] ;
  int f, c;
  cf(&f, &c);
 llenarMTZ(  R, f,c);
  op( R, B, f, c);
  mostrar(B, f, c);

}

void cf(int* f, int* c)
{
printf("INTRODUZCA EL NUMERO DE FILAS DE LAS MATRIZES \n");
scanf("%d", f);
printf("INTRODUZCA EL NUMERO DE COLUMNAS DE LAS MATRIZES \n");
scanf("%d", c);
}

void llenarMTZ( char R[FIL][COL], int f, int c)
{
   int i, j;
  printf("Introduzca los datos de la matriz, SOLAMENTE ENTEROS:\n");
  for(i = 0; i < f; i++)
  {
        for(j = 0; j < c; j++)
        {
         printf("Dato [%d][%d]:", i,j);
        getchar();
        scanf("%c", &R[i][j]);
        }
  }
    printf("\n");
}

void op(char R[FIL][COL], char B[FIL][COL], int f, int c)
{
int f1=f*2, c1=c*2, i, j, k, l;
char d='0';

k=0;
l=0;

for(i=0;i<f;i++)
{
	for(j=0;j<c;j++)
	{
		B[i][j]=R[i][j];
	}
}
for(i=0;i<f1;i++)
{
	for(j=c;j<c1;j++)
	{
		B[i][j]=d;
	}
}
for(i=f;i<f1;i++)
{
	for(j=0;j<c1;j++)
	{
		B[i][j]=d;
	}
}
for(i=f,k=0;i<f1,k<f;i++,k++)
{
	for(j=c,l=0;j<c1,l<c;j++,l++)
	{
		B[i][j]=R[k][l];
	}
}

}

void mostrar( char B[FIL][COL], int f, int c)
{
int i, j, f1=f*2, c1=c*2;
      for(i=0; i<f1; i++){
        for(j=0; j<c1; j++){
            printf("[ %c ]", B[j][i]);
        }
        printf("\n");
    }
}
