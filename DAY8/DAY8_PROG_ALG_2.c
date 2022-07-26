/*
1)include the header file
2)read the number from the user in hex
3)take the pointer and assign base address to pointer 
4)using if condition compare each value whether it is greater than or less than 
5)swap according to it using pointer
6)print the output */
#include <stdio.h>
int main()
{
    int a[5],i,j,n,*p,k=0;
    printf("enter the size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    p=a;
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(p[i]>a[j])
            {
                k=a[j];
                a[j]=p[i];
                p[i]=k;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
