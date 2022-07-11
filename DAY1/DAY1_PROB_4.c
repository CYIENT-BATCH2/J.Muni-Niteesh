1)include the header file
2)read the six digits from the user
3)write the condition for divide each number and check it is included with zero or not
4)if it included zero then return 0
5)reverse the number and print it
#include <stdio.h>
int main() {
 int n,c,k=0;
     printf("enter the 6 digits \n");
     scanf("%d",&n);
    loop: if(n>0)
     {
        c=n%10;
        if(c==0)
        {
         printf("zero is included in number\n");
            return 0;
        }
        k=k*10+c;
        n=n/10;
        goto loop;
     }
     printf("reverse of the number is %d\n",k);
    return 0;}
