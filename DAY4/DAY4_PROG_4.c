/*(D)BITWISE OPERATOR
1)write the expression from the question
2)calculate the expression
3)print the output
*/
#include <stdio.h>
int main() {
      // int i=10,j=20,m=5,k;
    // printf("value of k=%d\n",i&j);
    // printf("value of k=%d\n",i|j);
    // printf("value of k=%d\n",i^j);
    //  printf("value of k=%d\n",i&&j|m&&j);
    // printf("value of k=%d\n",k=i||j&m&&i);
    // printf("value of k=%d\n",i&j|j||m);
    int i=10,j=20,k=30;
    printf("value of k=%d\n",i&&j&k);
    printf("value of k=%d\n",i&j|k&&i);
    printf("value of k=%d\n",i||j&j);
    printf("value of k=%d\n",i||j&(j&&k));
    return 0;
}
