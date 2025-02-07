#include <stdio.h>
#include <math.h>

int main ()
{
  float a , b , c , d , x , y;
  printf("Donnez a");
  scanf("%f",&a);
  printf("Donnez b");
  scanf("%f",&b);
  printf("Donnez c");
  scanf("%f",&c);
  if (a==0)
  {
  x=-c/b;
  printf("La solution est %f",x);
  }
  d=(b*b)-4*a*c;
  if (d<0)
  {
    d=(-d);
    x=(-b-sqrt(d))/(2*a);
    y=(-b+sqrt(d))/(2*a);
    printf("Les solutions sont %fi est %fi ",x,y);
  }
  else if (d==0)
  {
    x=-b/(2*a);
    printf("La solution est %f",x);
  }
  if (d>0)
  {
    x=(-b-sqrt(d))/(2*a);
    y=(-b+sqrt(d))/(2*a);
    printf("Les solutions sont %f est %f ",x,y);
  }
  return 0;
}
    
  
