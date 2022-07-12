#include <stdio.h>
int main()
{
  int y,m,a,p=2022,n=12,b;
  printf("enter the year and month\n");
  scanf("%d%d",&y,&m);
  a=p-y;
  b=n-m;
   printf("%d years %d months\n ",a,b);
   return 0;
}
