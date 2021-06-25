#include<stdio.h>
#include<math.h>

void entradaDatos1(float *,float *,float *,float *,float *,float *,float *,float *);
void op(float ,float ,float , float , float );
void cr(float , float );
void pt(float , float , float , float , float , float , float , float );
void ps();
void bol();
void h();

void main()
{
  float a,b,c,d,e,f,x,y;
  
  entradaDatos1(&a,&b,&c,&d,&e,&f,&x,&y);
  op(x,y,a,b,c);
  pt(a,b,c,d,e,f,x,y);

}

void entradaDatos1(float *a,float *b,float *c,float *d,float *e,float *f,float *x,float *y)
{
  printf("Buenos dias/tardes/noches mi estimad@ \n");
  printf("Comenzemos introduciendo los datos necesarios \n");
  printf("Introduzca el valor de A \n");
  scanf("%f", a);
  printf("Introduzca el valor de B \n");
  scanf("%f", b);
  printf("Introduzca el valor de C \n");
  scanf("%f", c);
  printf("Introduzca el valor de D \n");
  scanf("%f", d);
  printf("Introduzca el valor de E \n");
  scanf("%f", e);
  printf("Introduzca el valor de F \n");
  scanf("%f", f);
  printf("Introduzca el valor del punto X \n");
  scanf("%f", x);
  printf("Introduzca el valor del punto  Y \n");
  scanf("%f", y);
}
void op(float x, float y, float a, float b, float c)
{
  float dis;

  dis = (pow(b,2)-(4*a*c));
  
  if(dis > 0)
  {
    h();
  }
  else if(dis == 0)
  {
    bol();
  }
  else if(dis < 0)
  {
    ps();
  }
  else
  {
    printf("No es parte de ninguna \n");
  }
  cr(x,y);
} 
void h()
{
  printf("La grafica es  Hiperbola \n");
}
void ps()
{
  printf("La grafica  es  elipse \n");
}
void bol()
{
  printf("La grafica  es parabola \n");
}

void cr(float x, float y)
{
  if(x>0 && y>0)
  {
    printf("El punto (%f,%f) escparte del  cuadrante 1 \n",x,y);
  }
  else if(x<0 && y>0)
  {
    printf("El punto (%f,%f) es parte del cuadrante 2 \n",x,y);
  }
  else if (x<0 && y<0)
  {
    printf("El punto (%f,%f) es parte del cuadrante 3 \n",x,y);
  }
  else if(x>0 && y<0)
  {
    printf("El punto (%f,%f) es parte del cuadrante  4 \n",x,y);
  }
  else if(x==0 && y!=0)
  {
  	printf("El punto (%f,%f) es del Eje Y \n",x,y);
  }
  else if(y==0 && x!=0)
  {
  	printf("El punto (%f,%f) es del Eje X \n",x,y);
  }
  else
  {
  	printf("El punto (%f,%f) es del origen \n",x,y);
  }
}

void pt(float a, float b, float c, float d, float e, float f, float x, float y)
{
	float z;

	z = (a*pow(x,2))+(b*x*y)+(c*pow(y,2))+(d*x)+(e*y)+f;
	
	if (z == 0)
	{
	  printf("\nPertenece a la grafica");
	}
	else
	{
	  printf("\nNo pertenece a la grafica");
	}
}
