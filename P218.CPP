#include<stdio.h>
#include<conio.h>
void main()
{
long n;
clrscr();
printf("Enter n value");
scanf("ld",&n);
printf("Last digit=%d\n",n%10);
while(n>9||n<-9)n=n/10;
printf("First digit=%d",n);
getch();
}
