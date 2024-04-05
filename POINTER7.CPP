#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,*p,rev=0,m;
clrscr();
p=&n;
printf("Enter a number--");
scanf("%d",&n);
for(m=*p;m!=0;m/=10)rev=rev*10+(m%10);
if(rev==(*p))puts("PALINDROME");
else puts("NOT PALINDROME");
getch();
}

