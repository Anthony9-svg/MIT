#include <stdio.h>

int main ()
{
  int i , n;
  printf("Donnez le nombre");
  scanf("%d",&n);
  for(i=2;i<=n;i=i+2)
  {
    printf("%d..\n",i);
  }
  return 0;
}
  
