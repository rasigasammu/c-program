#include <stdio.h>
int main()
{
    int n,a[10],i;
    printf("enter total numbers");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
printf("%d %d\n",a[i],i);
}
return 0;
}
