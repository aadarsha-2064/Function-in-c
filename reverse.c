// #include<stdio.h>
// int rev(int);
// int main()
// {
//     int n,revnum;
//     printf("enter  a number:");
//     scanf("%d",&n);
//     revnum= rev(n);
//     printf("the reverse of the number=%d",revnum);
//     return 0;
// }
// int reverse(int n)
// {
//     int rev=0,reminder;
//     while (n!=0)
//     {
//         reminder = n%10;
//         rev = rev * 10+reminder;
//         n= n%10;
//     }
//     return rev;
// }
#include<stdio.h>

int reverse(int n);  // Use the correct function name

int main()
{
    int n, revnum;
    printf("Enter a number: ");
    scanf("%d", &n);
    revnum = reverse(n);  // Call the correct function
    printf("The reverse of the number = %d", revnum);
    return 0;
}

int reverse(int n)
{
    int rev = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;  // Correct the logic here
    }
    return rev;
}
