/*(F)SHIFT OPERATOR
1)write the expression from the question
2)calculate the expression
3)print the output
*/
#include <stdio.h>
int main() {
   int i=10,j=2,k;
    printf("value of k=%d\n",i<<j);
    printf("value of k=%d\n",i>>j);
    printf("value of k=%d\n",(i&&j)<<j);
    printf("value of k=%d\n",(i||j)>>j);
     printf("value of k=%d\n",(i&j)<<i);
    printf("value of k=%d\n",(i||j&&i));  
    return 0;
}
