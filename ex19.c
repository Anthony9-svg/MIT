#include <stdio.h>
int main ()
{
  int a , b;
  float r;
  printf("Donnez le premier nombre");
  scanf("%d",&a);
  printf("Donnez le second nombre");
  scanf("%d",&b);
  do 
  {
    r=a%b;
    a=b;
    b=r;
  }
  while (b!=0);
  if (a==1)
  {
    printf("Ces nombres sont premiers entre eux");
  }
  else
  {
    printf("Ces nombres ne sont pas premiers entre eux");
  }
  return 0;
}g
