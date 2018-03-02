#include<stdio.h>
int main()
{
	char s1[10],s2[10];
	int a,b;
	scanf("%s",&s1);
	scanf("%s",&s2);
	a=strlen(s1);
	b=strlen(s2);
	if(a>b)
	{
		printf("%s",s1);
	}
	else
	{
		printf("%s",s2);
	}
	return 0;
}
