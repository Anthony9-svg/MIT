#include <stdio.h>
int main ()
{
  float a , b , m;
  int c1 , c2;
  printf("Donnez le premier nombre");
  scanf("%f",&a);
  printf("Donnez son coefficient");
  scanf("%d",&c1);
  printf("Donnez le second nombre");
  scanf("%f",&b);
  printf("Donnez son coefficient");
  scanf("%d",&c2);
  m=((a*c1)+(b*c2))/(c1+c2);
  printf("La moyenne est %f",m);
  return 0;
}
  
  


  
  

