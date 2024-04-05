#include<stdio.h>
#include<conio.h>
#define p printf
#define b break
void main()
{
long n,m,rev=0;
clrscr();
p("Enter a number");
scanf("%ld",&n);
if(n<0)p("-",n=-n);
for(m=n;m!=0;m/=10)rev=rev*10+(m%10);
do
{
switch(rev%10)
{
case 0:p("Zero");b;
case 1:p("One");b;
case 2:p("Two");b;
case 3:p("Three");b;
case 4:p("Four");b;
case 5:p("Five");b;
case 6:p("Six");b;
case 7:p("Seven");b;
case 8:p("Eight");b;
case 9:p("Nine");b;
}
rev/=10;p(" ");
}while(rev!=0);
while(n%10==0&&n!=0)p("Zero ",n/=10);
getch();
}
