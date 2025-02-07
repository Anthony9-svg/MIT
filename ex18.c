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
  printf("Leur PGCD est %d\n",a);
  return 0;
}
