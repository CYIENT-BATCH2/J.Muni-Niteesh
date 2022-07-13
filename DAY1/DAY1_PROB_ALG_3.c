/*1)include the header file
2)read the radius from the user
3)write the area of the circular garden 
4)print the area output */
#include <stdio.h>
int main() {
int r,c;
     printf("enter the radius\n");
     scanf("%d",&r);
     c=3.142*r*r;
     printf("area of the garden is %d\n",c);
    return 0;
}
