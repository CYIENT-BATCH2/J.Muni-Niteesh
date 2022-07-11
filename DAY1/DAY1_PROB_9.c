1)include the header file
2)read the digit from the user
3)write the condition by checking high and low
4)print the output

int t,n1,n2;
 scanf("%d%d",&n1,&n2);
 if(n1!=0&&n2!=0)
 {
    t=n1&n2;
    printf(" AND %d\n",t);
 }
 if(n1==0||n2==0)
 {
    t=n1|n2;
    printf(" OR %d\n",t);
 }
