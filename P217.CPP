#include<stdio.h>
#include<conio.h>
void main()
{
long n;int c=0;
clrscr();
printf("Enter n value");
scanf("%ld",&n);
c=printf("%ld",n);
if(n<0)c--;
printf(" is a %d digits no",c);
getch();
}
