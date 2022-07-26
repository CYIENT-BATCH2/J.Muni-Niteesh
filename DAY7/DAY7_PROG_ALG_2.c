/*
1)include the header file
2)read the number from the user in hex
3)write the condition to fetch odd values and even values then store it in another variable 
4)do shift operation then mix the odd and even values using OR operator 
5)print the output */
#include <stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter the value\n");
    scanf("%x",&n);
    i=n&0xAAAAAAAA;
    j=n&0x55555555;
    printf("%x",(i>>1)|(j<<1));
    return 0;
}
