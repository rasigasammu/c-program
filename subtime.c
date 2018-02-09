#include<stdio.h>
int main()
{
	int hour,minute,h1,m1,h2,m2;
	scanf("%d,%d,%d,%d",&h1,&m1,&h2,&m2);
	if(h1!=0)
	{
		hour=h1-h2;
		minute=m1-m2;
		printf("%d:%d",hour,minute);
	}
	return 0;
}
