#include<stdio.h>
int main()
{
	int i,j,t,a[3]={1,2,3};

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
	printf("%d",a[0]);
	return 0;
}
