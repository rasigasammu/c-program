#include<stdio.h>
int main()
{
	int a[10],n,i,j,t,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		
		}
	}
	m=a[n/2];
	
	printf("%d",m);
	
	return 0;
	
}
