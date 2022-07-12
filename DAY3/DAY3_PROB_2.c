#include <stdio.h>
int main(){
 int n,l,c,k=0,f,s;
     printf("enter the 6 digits \n");
     scanf("%d",&n);
    loop: if(n>0)
     {
        c=n%10;
        k++;
        if(k==2)
        {
          s=c;
        }
        else if(k==6)
         {
          f=c;
         }
        n=n/10;
        goto loop;
     }
     l=f+s;
     printf("sum of the number is %d\n",l);
    return 0;
}
