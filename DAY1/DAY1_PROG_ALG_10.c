/*1)include the header file
2)read the digit from the user
3)write the condition by checking each other numbers
4)print the output
*/
int n,n1,n2;{
if(n>n1 && n>n2)
printf("%d is greater than other two",n);
if(n1>n && n1>n2)
printf("%d is greater than other two",n1);
if(n2>n1 && n2>n)
printf("%d is greater than other two",n2);
else if(n==n1==n2)
printf("%d is equal number",n);
}
