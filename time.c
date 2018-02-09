#include<stdio.h>
int main()
{
	int n,hr,min;
	scanf("%d",&n);
	if(n<60)
	{
		printf("0%d",n);
	}
	else
	{
		hr=n/60;
		min=n%60;
	printf("%d",hr);
	printf("%d",min);
	}
	return 0;
}
