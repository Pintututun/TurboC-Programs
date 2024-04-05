#include<stdio.h>
#include<conio.h>
void swap(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
}
void main()
{
int x,y,z;
clrscr();
printf("Enter 3 numbers--");
scanf("%d %d %d",&x,&y,&z);
swap(&x,&y);
printf("%d  %d  %d",x,y,z);
getch();
}