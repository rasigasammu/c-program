#include<stdio.h>
int main()
{
	int r1=0,r2=1,r3,n;
	printf("value of n:\n");
	scanf("%d",&n);
	printf("%d",r2);
	while(n!=0)
	{
		r3=r1+r2;
		printf("\n%d",r3);
		r1=r2;
		r2=r3;
		n--;
	}
  return 0;
	}
