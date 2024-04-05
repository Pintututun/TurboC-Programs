#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
switch(a=printf("I\t"),printf("Am\t"))
{
case 1:puts("Indian");break;
case 2:puts("Bharathiyudu");break;
case 3:puts("Hindustani");break;
default:puts("Human");
}
printf("a=%d",a);
getch();
}
