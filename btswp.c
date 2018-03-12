#include <stdio.h>
int main()
{
int r,s;
scanf("%d %d",&r,&s);
{
	r=r^s;
  s=r^s;
  r=r^s;
}
printf("%d %d",r,s);

	return 0;
}
