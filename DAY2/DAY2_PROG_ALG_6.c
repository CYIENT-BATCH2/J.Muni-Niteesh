/*1)include the header file
2)read the degree and Fahrenheit from the user
3)write the condition to find degree and Fahrenheit
4)print the output */
#include <stdio.h>
int main() {
    float f,d;
     printf("enter the digit \n");
     scanf("%d%d",&f,&d);
  f=d*(1.8)+32;
    printf("%f",f);
  d=(f-32)/(1.8);
  printf("%f",d);
    return 0;
}
