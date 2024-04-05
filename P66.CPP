#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the two numbers--");
fflush(stdin);
scanf("%d %d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("Swap is %d,%d",a,b);
getch();
}