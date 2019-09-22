#include<stdio.h>
int occurence(int [],int,int);
int main(void)
{
    int a[50],n,k,i;
    printf("enter n");
    scanf("%d",&n);
    printf("/n enter array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("/nenter key");
    scanf("%d",&k);
    printf("occurence of %d=%d",k,occurence(a,n,k));
    return 0;
}
int occurence(int a[50],int n,int k)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        count++;
    }
    if(count>0)
    return count;
    else
    return -1;
}