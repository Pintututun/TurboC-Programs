#include<stdio.h>
#include<conio.h>
void main()
{
int a=0;
clrscr();
switch(a++||a++||a++)
{
case 1:puts("Indian");break;
case 2:puts("Bharathiyudu");break;
case 3:puts("Hindustani");break;
default:puts("Human");
}
printf("a=%d",a);
getch();
}
