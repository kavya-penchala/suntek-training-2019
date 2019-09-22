#include<stdio.h>
int count(int [],int,int);
int main(void)
{
    int b[50],n,k,i;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    printf("/nenter key");
    scanf("%d",&k);
    printf("count of %d=%d",k,count(b,n,k));
    return 0;
}
int count(int b[50],int n,int k)
{
    int i,cnt=0;
    for(i=0;i<n;i++)
    {
        if(b[i]==k)
        cnt++;
    }
    if(cnt>0)
    return cnt;
    else
    return -1;
}