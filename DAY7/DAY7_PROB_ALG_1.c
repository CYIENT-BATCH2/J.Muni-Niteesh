/*
1)include the header file
2)read the number from the user in hex
3)write the condition to fetch last value and do AND operation then do shift operation 
  for respective indexes values 
4)after fetching and shifting all the values to get altered binary values
5)print the output */
#include<stdio.h>
int main() {
    int x,b1,b2,b3,b4;
    printf("enter the number\n");
    scanf("%x",&x);
    b1=(x&0x000000ff)>>0;
    b2=(x&0x0000ff00)>>8;
    b3=(x&0x00ff0000)>>16;
    b4=(x&0xff000000)>>24;
    x=(b1<<24)|(b2<<16)|(b3<<8)|(b4<<0);
    printf("%x ",x);  
    return 0;
}
