#include<stdio.h>
#include<conio.h>
void main()
{
int n,*p,i,rev=0,m;
clrscr();
p=&n;  /* *p=&n */
printf("Enter a number--");
scanf("%d",&n);
while(*p!=0)
{
m=(*p)%10;
rev=(rev*10)+m;
*p=(*p)/10;
}
printf("REVERSE=%d",rev);
getch();
}

