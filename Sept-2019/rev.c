#include<stdio.h>
int reverse(int);
int main()
{
    int n,rev=0;
    printf("enter no");
    scanf("%d",&n);
    rev=reverse(n);
    printf("reverse of number is=%d\n",rev);
    return 0;
}
int reverse(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}