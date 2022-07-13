/*1)include the header file
2)read the year from the user
3)write the condition to find leap years
4)print the count of leap years output
*/
#include <stdio.h>
int main() {
    int y,n,c=0;
    printf("enter the year\n");
    scanf("%d%d",&y,&n);
    loop:if(y<n)
    {
    if(((y%4)==0) && ((y%100)!=0) || ((y%400)==0))
    {
    c++;
    }
    y++;
    goto loop;
    }
    printf("%d\n",c);
    return 0;
}
