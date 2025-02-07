#include <stdio.h>
int main ()
{
  int n , i , sum;
  printf("Donnez le nombre n ");
  scanf("%d",&n);
  sum=0;
  for (i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  printf("La somme des nombres entiers de 1 jusqu'à %d est %d\n",n,sum);
  return 0;
}
