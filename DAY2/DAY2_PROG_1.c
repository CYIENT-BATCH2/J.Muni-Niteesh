int main() {
    int n,j,k=0,m;
  printf("enter the number\n");
  scanf("%d",&n);
 // m=n;
  loop:if(n>0)
{
      j=n%10;
      k=k*1+j;
      n=n/10;
  
  goto loop;
 }
 printf("sum of the number is %d\n",k);
    return 0;
}
