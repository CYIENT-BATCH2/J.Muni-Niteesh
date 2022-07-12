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
