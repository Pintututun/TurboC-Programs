#include<stdio.h>
#include<conio.h>
void main()
{
long n;int s=0;
clrscr();
printf("Enter the no.");
scanf("%ld",&n);
while(n!=0)
{
s+=n%10;
n=n/10;
}
printf("Digital sum=%d",s);
getch();
}
