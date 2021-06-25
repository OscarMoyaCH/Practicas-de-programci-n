#include<stdio.h>
void numeroDatos(int* dat);
void desp(int* n);
void datos(int* A, int dat);
void rotaDerecha(int* A,int* B, int* n, int dat);
void mostrar(int* A, int dat);
#define MAX 30
void main(){
int A[MAX],B[MAX], n, dat;

numeroDatos(&dat);
datos(A, dat);
desp(&n);
rotaDerecha(A, B, &n,dat);
mostrar(A, dat);
}


void numeroDatos(int* dat){
	printf("Introduzca el numero de datos que va a ingresar \n");
	scanf("%d", dat);
}

void datos(int* A, int dat){
int i;
	for(i=0;i<dat;i++){
		printf("Introduce el dato [%d] del arreglo  \n", i+1);
		scanf("%d", &A[i]);
	}
}

void desp(int* n){
	printf("Introduzca el numero de veces que se hara el desplazamiento \n");
	scanf("%d", n);
}

void rotaDerecha(int* A, int* B,int* n, int dat){
	int i,aux, k, q,j;
	int D[MAX];
	
	k=*n;
	
	for(j=0;k>0;j++)
	{
		D[j] = A[dat-k];
		k--;
	}
	
	for(i=dat-1;i>=*n;i--)
	{
		A[i]=A[i-*n];
	}
	
	for(q=0;q<*n;q++)
	{
		A[q]=D[q];
	}
	

}

void mostrar(int* A, int dat){
	int i;
	for(i=0;i<dat;i++){
		printf("%d,", A[i]);
	}
}
