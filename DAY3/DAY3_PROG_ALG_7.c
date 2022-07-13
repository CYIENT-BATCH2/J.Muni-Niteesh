/*1)include the header file
2)read the year and month from the user
3)write the substract with current year and month calculate age 
4)print the output
*/
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
