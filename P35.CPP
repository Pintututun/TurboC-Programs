#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter a,b,c values ");
scanf("%d %d %d",&a,&b,&c);
if(a==b&&a==c)puts("All are equal");
else if(a>b&&a>c)printf("a is big");
else if(a==b&&a>c)puts("a & b are big");
else if(b==c&&b>a)puts("b & c are big");
else if(a==c&&a>b)puts("a & c are big");
else if(b>c)printf("b is big");
else printf("c is big");
getch();
}