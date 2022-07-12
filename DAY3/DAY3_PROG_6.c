#include <stdio.h>
int main()
{
  int m,n;
  printf("enter the hex number\n");
  scanf("%X%d",&m,&n);
  printf("%X",(m>>n));
   return 0;
}
