#include <stdio.h>

int main()
{
	int n,i,s=0,a[5],avg;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
	s=s+a[i];
	}
	avg=s/n;
	printf("%d",avg);
		return 0;
}
