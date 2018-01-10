#include<stdio.h>
#include<conio.h>
void main()
char ch;
printf("Enter any character");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("Entered character is values");
}
else
{
printf("Entered character is constant");
}
getch();
}
