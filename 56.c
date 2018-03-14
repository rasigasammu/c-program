#include<stdio.h>
int main()
{
    char s[10];
    scanf("%c",&s);
   if((s>='a'||s<='z')&&(s>='A'||s<='Z')&&(s>=0||s<=9))
    {
        printf("s");
    }
    else
    {
        printf("no");
    }
    return 0;
}
