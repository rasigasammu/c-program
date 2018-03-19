#include <stdio.h>
#include<string.h>
int main()
{
  char n[30],i,c=0,l;
scanf("%s",&n);
l=strlen(n);
for(i=0;n[i]!='\0';i++)
{
if((n[i]=='0')||(n[i]=='1'))
{
c++;
}
}
if(c==l)
{
printf("Binary");
}
else
{
printf("Not a binary");
}
    return 0;
}
