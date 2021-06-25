#include<stdio.h>
#include<math.h>

//Prototipos de funciones 
float distanciapuntos (float ax, float ay, float bx, float by);
float ecurecta(float ax, float ay, float bx, float by);
float b(float ax, float ay);
float entradaDatos1(void);
float entradaDatos2(void);
float entradaDatos3(void);
float entradaDatos4(void);
void final1(float distanciapuntosfinal);
void final2(float ecuaciondelarecta,float btotal);


void main(){
	float ax, ay, bx, by,distanciapuntosfinal,btotal,ecuaciondelarecta;
	ax=entradaDatos1();
	ay=entradaDatos2();
	bx=entradaDatos3();
	by=entradaDatos4();
	distanciapuntosfinal=distanciapuntos(ax, ay, bx, by);
	ecuaciondelarecta=ecurecta(ax,ay,bx,by);
	btotal=b(ax,ay);
	final1 (distanciapuntosfinal);
	final2 (ecuaciondelarecta,btotal);
	
		}
		
//Cuerpo de funciones 

float entradaDatos1(void){
	float ax;
	printf("Ingrese el primer valor de x \n");
	scanf("%f",&ax);
	return ax;
}	

float entradaDatos2(void){
	float ay;
	printf("Ingrese el primer valor de y \n");
	scanf("%f",&ay);
	return ay;
}		

float entradaDatos3(void){
	float bx;
	printf("Ingrese el segundo valor de x \n");
	scanf("%f",&bx);
	return bx;
}		

float entradaDatos4(void){
	float by;
	printf("Ingrese el segundo valor de y \n");
	scanf("%f",&by);
	return by;
}		

float distanciapuntos(float ax, float ay, float bx, float by){
	float distanciapuntos, distanciapuntosraiz;
	distanciapuntos= ((pow(bx-ax,2))+(pow(by-ay,2)));
	distanciapuntosraiz= sqrt(distanciapuntos);
	return distanciapuntosraiz;
}

float ecurecta(float ax, float ay, float bx, float by){
     float ecurecta;
     ecurecta= ((by-ay)/(bx-by));
     return ecurecta;
}

float b ( float ax, float ay){
	float b, ecuaciondelarecta;
	b= ((ay)-(ecuaciondelarecta*ax));
	return b;
}

void final1 (float distanciapuntosfinal){
	printf("La distancia entre los puntos es %f", distanciapuntosfinal);
}

void final2 (float ecuaciondelarecta, float btotal){
    printf("y= %f", ecuaciondelarecta);
    printf("%f",btotal);
}







	
