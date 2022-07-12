#include <stdio.h>
int main()
{
     int n,i;
     printf("enter the digit \n");
     scanf("%d",&n);
    loop:if(n>0)
{
      i=n%10;
      if(i==3)
      printf("given number includes %d\n",i);
      n=n/10;
  goto loop;
 }
    return 0;
}
