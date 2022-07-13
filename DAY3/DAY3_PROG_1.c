/*1)include the header file
2)read the 8 numbers and 7 float digits from the user
3)do sum,average and divide with each other
4)convert the all float into decimal  
5)print the output
*/
#include <stdio.h>
int main()
{
  int n,m,k,l,q,w,e,v,sum,avg;
  float a,s,d,f,g,h,j,z,x,o,c;
    printf("enter the numbers\n");
    scanf("%d%d%d%d%d%d%d%d",&n,&m,&k,&l,&q,&w,&e,&v);
    scanf("%f%f%f%f%f%f%f",&a,&s,&d,&f,&g,&h,&j);
    sum=(n+m+k+l+q+w+e+v);
    avg=(sum)/8;
    printf("%d %d\n",sum,avg);
    z=(a+s+d+f+g+h+j);
    x=(z/7);
    printf("%f %f\n",z,x);
    o=(sum/z);
    c=(avg/x);
    printf("%f %f\n",o,c);
    printf("%d%d%d%d%d%d%d",a,s,d,f,g,h,j);
    return 0;
}
