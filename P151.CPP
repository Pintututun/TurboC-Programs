#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
printf("%d\n",5>3>1);
printf("%d\n",5>3>0);
printf("%d\n",5&&7&&1.2);
printf("%d\n",-5&&'a'&&5%5);
printf("%d\n",0||5%5);
printf("%d\n",!(!5%5 && !8>=!0));
getch();
}