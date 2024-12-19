
#include<stdio.h>
int fact(int);
int main(){
    int n,f;
    printf("enter a number:");
    scanf("%d",&n);
    f= fact(n);
    printf("the factoral number =%d",f);
    return 0;
}
int fact (int n){
    if (n<=1)
    {
        return 1;
    }
    else
    return (n*fact(n-1));
    
}