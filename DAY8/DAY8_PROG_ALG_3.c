/*
1)include the header file
2)read the number from the user in hex
3)write the condition to Set the register1 value such a way that bit reg2 and PSA bit are set (1) 
4)Find out the value of 2,1,0 bits in register1 if the value of the register is 0xF3
5)print the output */
#include <stdio.h>
int main()
{
int i,j;
printf("enter the number\n");
scanf("%x",&i);
for(int l=0;l<8;l++)
{
    if(l==3 || l==7)
    {
        i=i|1<<l;
    }
}
printf("%x ",i);
if(i==0xf3)
{
    for(j=0;j<3;j++)
    printf("%d",i>>j&1);
}
    return 0;
}
