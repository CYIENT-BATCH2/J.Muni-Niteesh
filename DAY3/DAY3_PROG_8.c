#include <stdio.h>
int main()
{
  char m;
  printf("enter the number\n");
  scanf("%c",&m);
  ((m>='A')&&(m<='Z') || (m >='a') && (m <='z'))?printf("given input is alphabet\n "):printf("given input is not alphabet\n ");
   return 0;
}
