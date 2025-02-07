#include <stdio.h>
int main ()
{
  int n , i , fact ;
  float sum;
  printf("Donnez le nombre n");
  scanf("%d",&n);
  fact=1;
  sum=0.0;
  for (i=1;i<=n;i++)
  {
    fact=fact*i;
    sum=sum+(1.0/fact);
  }
  printf("La somme des inverses des factoriels des nombres allant de 1 jusqu'à %d est %f\n",n,sum);
  return 0;
}
