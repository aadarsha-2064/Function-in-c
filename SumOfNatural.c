//sum of natural number
#include<stdio.h>
int sum(int);
int main()
{
int n,s;
printf("enter a number");
scanf("%d",&n);
s= sum(n);
printf("sum of natural number=%d",s);
return 0;
}
int sum(int n)
{
    if(n<=1)
    return n;
    else
    return (n+sum(n-1));
}