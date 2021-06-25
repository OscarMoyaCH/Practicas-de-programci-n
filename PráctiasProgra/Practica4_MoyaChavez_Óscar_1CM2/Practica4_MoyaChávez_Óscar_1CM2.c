#include <stdio.h>
#include <math.h>
void entradadatos1(int*);
void entradadatos2(float*,float*);
void numerador(int,float,float,float*);
void denominador(int,float,float*);
void mostrar(float,float);
int main() {
    int n;
    float a,b,o,z;
    entradadatos1(&n);
    o=1;
    z=0;
    entradadatos2(&a,&b);
    numerador(n,a,b,&z);
    denominador(n,a,&o);
    mostrar(o,z);
}
void entradadatos1(int*n){
    printf("Introduzca el valor de n \n");
    scanf("%d",n);
}
    void entradadatos2(float*a,float*b){
    printf("Introduzca el valor de a\n");
    scanf("%f",a);
    printf("Introduzca el valor de b\n");
    scanf("%f",b);
}
void numerador(int n,float a,float b,float*z){
    float c,d,e;
    int i;
    i=1;
    do{
        c=(a-b);
        d=pow(c,i);
        e=(d-3)+n;
        *z+=e;
        i++;
    }
    while(i<=n);
}
void denominador(int n,float a,float*o){
    float h;
    int j,l;
    l=n-1;
    j=2;
    do{
        h=(2+(a*(j-1)));
        *o*=h;
        j++;
    }
    while(j<=l);
}
void mostrar(float o,float z){
    float lol;
    lol=(z/o);
    printf("El resultado de la serie es :%f\n",lol);
}

































