#include<stdio.h>
int occurence(int [],int,int);
int main(void)
{
    int a[50],n,k,i,c,j;
    printf("enter n");
    scanf("%d",&n);
    printf("/n enter array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
       c=0;
       for(j=0;j<=i;j++)
       {
           if(a[i]==a[j])
           c++;
       }
       if(c>1)
       continue;
       else
       printf("\n %d %d",a[i],occurence(a,n,a[j]));
   }
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