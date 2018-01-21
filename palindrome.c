#include<stdio.h>
void main()
{
int d, n, t, s;
scanf("%d",&n);
while(n>=1)
{
t=n;
d=t%10;
r=r*10+d;
n=t/10;
}
printf("%d",r);
if(r=n)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
}
