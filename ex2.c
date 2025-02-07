#include <stdio.h>

int main ()
{
  float a , b;
  printf("Donnez le premier nombre");
  scanf("%f",&a);
  printf("Donnez le second nombre");
  scanf("%f",&b);
  if (a*b<0)
  {
    printf("Le produit est negatif");
  }
  else 
  {
    printf("Leur produit est positif");
  }
  return 0;
}
  
