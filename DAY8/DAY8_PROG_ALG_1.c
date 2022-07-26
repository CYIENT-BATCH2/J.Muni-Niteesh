/*
1)write a function and include the header file
2)read the number and position from the user 
3)write the condition to flip the pos that taken from the user 
4)after fliping that pos return the value and
5)print the output */

#include <stdio.h>
int flip(int ,int);
int main() {
int n,p,r;
printf("enter the number\n");
scanf("%d%d",&n,&p);
printf("flip before of the number is %d %d\n",n,p);
r=flip(n,p);
printf("flip after of the number is %d\n",r);
}
int flip(int a,int b)
{
    for(int i=0;i<8;i++)
    {
        if(i==b)
        {
            if(0==(a>>i&1))
            {
            a=(a|1<<i);
            }
            else if(1==(a>>i&1))
            {
            a=(a&~1<<i);
            printf("%d\n",a);   
            }
        }
    }
    return a;
}
