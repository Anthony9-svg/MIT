#include <stdio.h>
#include <math.h>
int main ()
{
  int n , i ;
  float sum;
  printf("Donnez le nombre n ");
  scanf("%d",&n);
  sum=0;
  for (i=0;i<=n;i++)
  {
    sum=sum+(pow(10,i));
  }
  printf("La somme des puissances de 10 allant de 1 jusqu'à %d est %f\n",n,sum);
  return 0;
}
