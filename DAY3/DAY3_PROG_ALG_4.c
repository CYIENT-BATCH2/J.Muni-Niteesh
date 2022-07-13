/*1)include the header file
2)read the number from the user
3)write the condition print the hex number 
4)print the binary number in the output */
#include <stdio.h>
int main()
{
  int r,n,k=0,m,j=7;
  printf("enter the number\n");
  scanf("%d",&n);
  m=n;
  loop:
  if(n!=0)
  {
      r=n%16;
      if(r<10)
      r=48+r;
      else
      r=55+r;
      k=k*100+r;
      printf("%c",r);
      n=n/16;
      goto loop;
  }
    lop:
     if(j>=0&&j<8){
      printf("%d",m>>j&1);
     j--;
  goto lop;}
    return 0;
}
