#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,i;
 printf("enter the first interval /n");
 scanf("%d",&a);
 printf("enter the second interval /n");
 scanf("%d",&b);
 for(i=a,i<b,i++)
 {
 if(i%2==0)
 {
 printf("The even number  %d",i);
 }
 }
 }
