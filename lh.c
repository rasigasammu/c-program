#include<stdio.h>
int main()
{
	int a[10],n,i,j,t,l,h;
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
	l=a[0];
	h=a[n-1];
	printf("%d,%d",l,h);
	
	return 0;
	
}
