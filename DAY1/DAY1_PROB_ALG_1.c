/*1)include the header file
2)read the number from the user
3)write the condition which divisible by 11 
4)print the output
*/
#include <stdio.h>
int main() {
     int n;
     printf("enter the number\n");
     scanf("%d",&n);
     if(n%11==1 && ((n-1)%11)==0)
     {
        printf("given number is special\n"); 
     }
    else
    {
        printf("not a special \n");
    }
    return 0;
}
