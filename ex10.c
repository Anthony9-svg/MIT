#include <stdio.h>
int main ()
{
  int n , i;
  float r;
  printf("Donnez n");
  scanf("%d",&n);
  printf("Les diviseurs de %d sont:\n",n);
  for(i=1;i<=n;i++)
  {
    r=n%i;
    if (r==0)
    { 
      printf("%d\n",i);
    }
  }
  return 0;
}
  
  
