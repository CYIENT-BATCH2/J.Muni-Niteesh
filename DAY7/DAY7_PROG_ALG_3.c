/*
1)include the header file
2)read the two variables from the user in hex
3)write the condition to get 2345 index values of one variable compare whether it is eqaal to 0x07
4)if it is equal then set the 0123 index values as set and
5)print the output */
#include <stdio.h>
int main() {
int cmcon,adcon0,i;
printf("enter the number\n");
scanf("%d%d",&cmcon,&adcon0);
i=(adcon0 & 0x3c)>>2;
if(i==0x07)
printf("%x",(cmcon&0xf0));
else
printf("0x07 is not there in register\n");
return 0;
}
