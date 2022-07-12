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
