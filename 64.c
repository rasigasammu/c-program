#include<stdio.h>
int main()
{
	int N,M,r;
	scanf("%d,%d",&N,&M);
	r=N+M;
	if(r%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
