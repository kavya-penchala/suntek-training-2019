#include<stdio.h>
#include<conio.h>
void main()
{
    getch();
table();
}
void table()
{
    int i,n,t;
printf("enter n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
t=n*i;
printf("%d*%d=%d\n",n,i,t);
}
}
