#include<stdio.h>
int main()
{
	int N,M,r;
	scanf("%d %d",&N,&M);
	r=N-M;
	if(r%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}
