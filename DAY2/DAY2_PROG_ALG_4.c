/*
1)include the header file
2)read the number from the user
3)write the condition to check 3 included or not
4)print the output */
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
