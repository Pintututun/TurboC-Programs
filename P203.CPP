#include<stdio.h>
#include<conio.h>
void main()
{
int n,es=0,os=0;
clrscr();
printf("Enter n value");
scanf("%d",&n);
while(n>=1)
{
if(n%2==0)es+=n;
else os+=n;
n--;
}
printf("Even sum=%d,Odd sum=%d",es,os);
getch();
}
