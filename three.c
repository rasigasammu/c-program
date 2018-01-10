#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter three numbers");
scanf("%d,%d,"&a,&b,&c);
if(a>b&&a>c)
{
printf("a is greater");
}
if(b>a&&b>c)
{
printf("b is greater");
}
if(c>a&&c>b)
{
printf("c is greater");
}
return 0;
}
