#include<stdio.h>
#include<math.h>

//Prototipos de funciones 

void entradaDatos(float*, float*, float*, float*, float*);
void promedio(float*, float*, float*, float*, float*, float*);
void moda(float*, float*, float*, float*, float*, float*, float*, float*, float*, float*, float*);
void raiz(float*, float*, float*, float*, float*, float*);
void final(float*);
void main(){
	float num1, num2, num3, num4, num5, prom, mnum1, mnum2, mnum3, mnum4, mnum5, r;
	
	entradaDatos(&num1, &num2, &num3, &num4, &num5);
	promedio(&num1, &num2, &num3, &num4, &num5, &prom);
	moda(&num1, &num2, &num3, &num4, &num5, &prom, &mnum1, &mnum2, &mnum3, &mnum4, &mnum5);
	raiz( &mnum1, &mnum2, &mnum3, &mnum4, &mnum5, &r);
    final(&r);
}

void entradaDatos(float* num1, float* num2, float* num3, float* num4, float* num5){
	printf("Introduzca el primer numero \n");
	scanf("%f", num1);
	printf("Introduzca el segundo numero \n");
	scanf("%f", num2);
	printf("Introduzca el tercer numero \n");
	scanf("%f", num3);
	printf("Introduzca el cuarto numero \n");
	scanf("%f", num4);
	printf("Introduzca el quinto numero \n");
	scanf("%f", num5);
}

void promedio(float* num1, float* num2, float* num3, float* num4, float* num5, float* prom){
    *prom= (((*num1)+(*num2)+(*num3)+(*num4)+(*num5))/5);
}

void moda(float* num1, float* num2, float* num3, float* num4, float* num5, float* prom, float* mnum1, float* mnum2, float* mnum3, float* mnum4, float* mnum5){
	*mnum1= pow(*num1- *prom, 2);
	*mnum2= pow(*num2- *prom, 2);
	*mnum3= pow(*num3- *prom, 2);
	*mnum4= pow(*num4- *prom, 2);
	*mnum5= pow(*num5- *prom, 2);
}

void raiz (float* mnum1, float* mnum2, float* mnum3, float* mnum4, float* mnum5, float* r){
 *r=sqrt(((*mnum1)+(*mnum2)+(*mnum3)+(*mnum4)+(*mnum5))/5);
}

void final(float* r){
printf("El resultado es %f \n", *r);
}










