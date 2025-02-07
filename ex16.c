#include <stdio.h>
int main ()
{
  int n , i , fact , sum;
  printf("Donnez le nombre n");
  scanf("%d",&n);
  fact=1;
  sum=0;
  for (i=1;i<=n;i++)
  {
    fact=fact*i;
    sum=sum+fact;
  }
  printf("La somme des factoriels des nombres allant de 1 jusqu'à %d est %d\n",n,sum);
  return 0;
}
  
    
