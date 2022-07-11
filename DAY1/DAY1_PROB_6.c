
1)include the header file
2)read the digit from the user
3)write the condition checking greater than number with each other 
4)print the output
#include<stdio.h>
int main()
int t,n1,n2,n3,n4,n5;
 scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
loop: if(n1>n2)
{
    t=n1;
    n1=n2;
    n2=t;
    goto loop ;
}
 if(n2>n3)
{
    t=n2;
    n2=n3;
    n3=t;
    goto loop ;
}
 if(n3>n4)
{
    t=n3;
    n3=n4;
    n4=t;
    goto loop ;
} if(n4>n5)
{
    t=n4;
    n4=n5;
    n5=t;
    goto loop ;
}
printf("%d %d %d %d %d\n",n1,n2,n3,n4,n5);
}
return 0;
}
