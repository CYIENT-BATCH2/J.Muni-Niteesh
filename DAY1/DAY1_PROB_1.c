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
