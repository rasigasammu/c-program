#include<stdio.h>
int main()
{
	int i,j,t,a[3],n,median;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		n=a[i];
		median=(n+1)/2;
	}
	printf("%d",median);
	return 0;
}
