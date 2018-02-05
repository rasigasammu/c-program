#include<stdio.h>
int main()
{
	int i,j,t,a[3]={2,1,3};

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
	printf("%d \n",a[i]);
	}
	return 0;
}
