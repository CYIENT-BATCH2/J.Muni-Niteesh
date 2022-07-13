/*1)include the header file
2)read the number from the user
3)write the condition 
4)print the output in 0's and 1's
*/
#include <stdio.h>
int main() {
  
    int n,i=31;
     printf("enter the digit \n");
     scanf("%d",&n);
  loop:if(i>=0)
    {
        printf("%d",n>>i&1);
        i--;
    goto loop;
    }
    return 0;
}
