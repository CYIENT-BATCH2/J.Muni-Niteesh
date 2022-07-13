/*1)include the header file
2)read the number from the user
3)write the condition 
4)print the output
*/
#include <stdio.h>
int main() {
  
    int n,i;
     printf("enter the digit \n");
     scanf("%d",&n);
     i=(n*(n-1))/2;
     printf("%d\n",i);
    return 0;
}
