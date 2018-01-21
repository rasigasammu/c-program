#include<stdio.h>
#include<conio.h>
void main()
{
int rem,rev=0,n,,t;
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(t==rev)
{
printf("yes");
}
else
{
printf("no");
}
}
