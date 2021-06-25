#include<stdio.h>

//Prototipos de funciones 
void entradaDatos(float*);
void calculohoras(float*, float*, float*);

void main(){
	float horas, salario, salario1;
	entradaDatos(&horas);
	calculohoras(&horas, &salario, &salario1);
}

void entradaDatos(float* horas){
	printf("Ingrese el numero de horas trabajadas \n");
	scanf("%f", horas);
}

void calculohoras(float* horas, float* salario, float* salario1){
	if (*horas<=40){
	    *salario=(*horas*16);
	    printf("El salario es: %f \n", *salario);
}
    else{
	*salario1=(20*(*horas-40));
	*salario=*salario1+40*16;
	printf("El salario es %f \n", *salario);
}
	
}

