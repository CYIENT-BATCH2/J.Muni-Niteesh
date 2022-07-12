#include <stdio.h>
int main()
{
  int m;
  printf("enter the hex number\n");
  scanf("%X",&m);
  printf("%X",(m>>3));
   return 0;
}
