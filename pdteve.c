#include<stdio.h>
int main()
{
    int N,M,e;
    scanf("%d,%d",&N,&M);
    e=N*M;
    if(e%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
