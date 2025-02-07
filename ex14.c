
#include <stdio.h>
int main ()
{
  int n , i  ;
  float sum;
  printf("Donnez le nombre n ");
  scanf("%d",&n);
  sum=0.0;
  for (i=1;i<=n;i++)
  {
    sum=sum+(1.0/i);
  }
  printf("La somme des inverses de 1 jusqu'à %d est %f \n",n,sum);
  return 0;
}
