#include<stdio.h>
int main()
{
	int i,count=0;
	char b[100];
	scanf("%[^\n]",b);
	for(i=0;b[i]!=0;i++)
	{
		if(b[i]=='.')
		{
			count++;
		}
	}
	printf("%d",count+1);
	return 0;
}
