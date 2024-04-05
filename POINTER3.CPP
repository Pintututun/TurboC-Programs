#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*p,*q,sum;
clrscr();
p=&a;
q=&b;
printf("Enter two numbers--");
scanf("%d %d",&a,&b);
sum=(*p)+(*q);
printf("Sum=%d",sum);
getch();
}