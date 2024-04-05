#include<stdio.h>
#include<conio.h>
void main()
{
long n,m,rev=0;
clrscr();
printf("Enter the no");
scanf("%ld",&n);
for(m=n;m!=0;m/=10)rev=rev*10+(m%10);
puts(n==rev?"Palindrome":"Not a Palindrome");
getch();
}
