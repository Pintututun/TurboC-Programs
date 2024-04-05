#include<stdio.h>
#include<conio.h>
void main()
{
int a=1;
clrscr();
xyz:
if(a<=10)
{
printf("%d\n",a);
a++;
goto xyz;
}
getch();
}