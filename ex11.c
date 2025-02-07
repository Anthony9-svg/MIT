#include <stdio.h>
int main ()
{
  int n , i , fact;
  printf("Donnez le nombre n");
  scanf("%d",&n);
  fact=1;
  for (i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("Le factoriel de %d est %d \n",n,fact);
  return 0;
}
  
