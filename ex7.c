#include <stdio.h>

int main ()
{
  float a , b , c;
  printf("Donnez le premier nombre");
  scanf("%f",&a);
  printf("Donnez le second nombre" );
  scanf("%f",&b);
  printf("Donnez le troisieme nombre" );
  scanf("%f",&c);
  if (a>b && a>c)
  {
    printf("Le maximum est %f",a);
  }
  if (b>a && b>c)
  {
    printf("Le maximum est %f",b);
  }
  if (c>a && c>b)
  {
    printf("Le maximum est %f", c);
  }
  return 0;
}
