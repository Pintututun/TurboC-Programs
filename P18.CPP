#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
printf("%d\n",1?2?3:4:5);
printf("%d\n",0?1?2:3:4);
printf("%d\n",1?0?2:3:4);
getch();
}