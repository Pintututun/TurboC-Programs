#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter two numbers");
scanf("%d %d",&a,&b);
printf("%d is big\n",a>b?a:b);
puts(a>b?"a is big":"b is big");
a>b?puts("a is big"):puts("b is big");
puts(a>b?"a is big":b>a?"b is big":"Both are equal");
getch();
}