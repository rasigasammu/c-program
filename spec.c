#include<stdio.h>
#include<string.h>
void main()
{
	int sum=0,count=0,a;
	char a[50];
  printf("Enter the string");
  gets(a);
	a=strlen(a);
	for(int i=0;i<=a;i++)
	{
		if((a[i]==' ')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='10'))
		{
		    sum++;
		}
		else
		{
		  count++;
		}
	}
	printf("The no of  special character in the line is %d\n",count);
}

