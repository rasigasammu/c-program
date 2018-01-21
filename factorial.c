#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("Enter any integer");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	fact=fact*i;
}
printf("factorial of given num is%d",fact);
return 0;
}
	

