/*A)1)include the header file
2)read the character from the user
3)write the condition to print binary 
4)print the output */
#include <stdio.h>
int main() {
    int n=0xff;
printf("oxFF binary is  \n");
    for(int i=7;i>=0;i--)
    printf("%d",(n>>i)&1);
     printf("\n");
}
/*B)1)include the header file
2)read the character from the user
3)write the condition to print binary into hex 
4)print the output */
#include <stdio.h>
int main() {
    int d,k,p=1,sum=0;
    scanf("%d",&d);
     while(d!=0)
     {
         k=d%10;
     sum=p*k+sum;
     d/=10;
         p*=2;
     }
     printf("00010001 in hex is = %d %x\n",sum,sum);
}
/*C)1)include the header file
2)read the character from the user
3)write the condition hex to binary to decimal
4)print the output */
#include <stdio.h>
int main()
{
   int J,m=0xAA;
     printf("oxAA binary and hex is  \n");
      for(J=7;J>=0;J--)
    printf("%d",(m>>J)&1);
      printf("\n");
     printf("%d\n",m);

    return 0;
}
/*D)1)include the header file
2)read the character from the user
3)write the condition binary to decimal and Hex
4)print the output */
#include <stdio.h>
int main() {
    int k,p=1,sum1=0,l;
    scanf("%d",&l);
     while(l!=0)
      {
        k=l%10;
     sum1=p*k+sum1;
      l/=10;
        p*=2;
      }
    printf("01010101 in hex is = %d %x\n",sum1,sum1);
}
