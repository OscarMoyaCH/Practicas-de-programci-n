#include<stdio.h>
#include<stdlib.h>
void darDimMtz(int*, int*);
int **crearMatriz(int, int);
void darDatosMtz(int**, int , int);
void change(int*, int*);
void calculo(int**, int , int, int, int);
void mostrarMtz(int**, int, int);
void liberarMtz(int**, int);
void main()
{
	int fil, col, **mtz, fch1, fch2; 
	darDimMtz(&fil, &col);
    mtz=crearMatriz(fil, col);	
    darDatosMtz(mtz, fil, col);
    change(&fch1, &fch2);
    calculo(mtz, fil , fil, fch1, fch2);
    mostrarMtz(mtz, fil, col);
    liberarMtz(mtz, fil);
}

void darDimMtz(int* fil, int* col)
{
	printf("Indique el numero de filas \n");
	scanf("%d", fil);
	printf("Indique el numero de columnas \n");
	scanf("%d", col);
}

int **crearMatriz(int fil, int col)
{
	int** mtz, i;
	mtz=(int**)malloc(fil * sizeof(int*));
	if(mtz ==NULL)
	{
		printf("No hay memoria disponible\n");
		exit(0);
	}
	for(i=0;i<fil;i++)
	mtz[i]=(int*)malloc(sizeof(int) * col);
	return mtz;
}

void darDatosMtz(int** mtz, int fil, int col)
{
int i, j;
printf("Ingrese los datos de la matriz\n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Dato[%d][%d]=",i+1, j+1);
			scanf("%d", &mtz[i][j]);
		}
	}
}

void change(int* fch1, int* fch2)
{
	printf("Ingrese la primer fila que quiere intercambiar \n");
	scanf("%d", fch1);
	getchar();
	printf("Ingrese la segunda fila que quiere intercambiar \n");
	scanf("%d", fch2);
}

void calculo(int** mtz, int fil, int col, int fch1, int fch2)
{
	int i, aux1=0, aux2=0;
	int auxf1=fch1-1;
	int auxf2=fch2-1;
	for(i=0;i<=col;i++)
	{
		aux1=mtz[auxf1][i];
		aux2=mtz[auxf2][i];
		mtz[auxf1][i]=aux2;
		mtz[auxf2][i]=aux1;
		aux1=0;
		aux2=0;
	}
}

void mostrarMtz(int** mtz, int fil, int col)
{
	int i, j;
	printf("Los datos de la mtatriz son: \n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t %d", mtz[i][j]);
			printf("\n");
		}
	}
}

void liberarMtz(int** mtz, int fil)
{
	int i;
	for(i=0;i<fil;i++)
	{
		free(mtz[i]);
		free(mtz);
		printf("\nMemoria Liberada...\n");
	}
}
















