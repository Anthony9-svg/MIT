#include <stdio.h>

int main ()
{
  float a , b , c , d;
  printf("Donnez le premier nombre");
  scanf("%f",&a);
  printf("Donnez le second nombre");
  scanf("%f",&b);
  c=a+b;
  d=c/2;
  printf("Leur somme est %f et leur moyenne est %f ",c,d);
  return 0;
}
