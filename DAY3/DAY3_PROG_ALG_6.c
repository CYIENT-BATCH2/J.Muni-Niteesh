/*1)include the header file
2)read the hex and pos from the user
3)write the shift operation according to pos 
4)print the output
*/
#include <stdio.h>
int main()
{
  int m,n;
  printf("enter the hex number\n");
  scanf("%X%d",&m,&n);
  printf("%X",(m>>n));
   return 0;
}
