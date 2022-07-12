#include <stdio.h>
int main()
{
  int r,n,k=0;
  printf("enter the number\n");
  scanf("%d",&n);
  loop:
  if(n>0&&n<999)
  {
      r=n%10;
      k=k*10+r;
      n=n/10;
      goto loop;}
      printf("%d",k);
    return 0;
}
