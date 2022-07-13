/*(B)RELATIONAL OPERATOR
1)write the expression from the question
2)calculate the expression
3)print the output
*/
#include <stdio.h>
int main() {
    int x=10,y=20,z;
    printf("value of z=%d\n",x<y);
    printf("value of z=%d\n", x>y);
    printf("value of z=%d\n",x<=y);
    printf("value of z=%d\n",(x*x-y)>(y*y-x));
    printf("value of z=%d",(x*x*x)<(y*x*x));
    printf("value of z=%d",((x*y)!=(y*x)));
    printf("value of z=%d",((x*y)==(y*x)));
    return 0;
}
