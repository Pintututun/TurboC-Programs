#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
puts("Enter a number--");
scanf("%d",&n);
puts((n%2)?"odd":"even");
getch();
}