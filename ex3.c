#include <stdio.h>
int main ()
{
  float a , b , c , d;
  printf("Donnez a");
  scanf("%f",&a);
  printf("Donnez b");
  scanf("%f",&b);
  printf("Donnez c");
  scanf("%f",&c);
  d=a;
  a=b;
  b=c;
  c=d;
  printf("Les valeurs deviennent a=%f b=%f c=%f",a,b,c);
  return 0;
}
  
  

