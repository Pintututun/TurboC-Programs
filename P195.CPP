#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
switch(*(3+"I Like""ABCD"+4))
{
case 'A':printf("Kiara Advani");break;
case 'B':printf("Jhanvi Kapoor");break;
case 'C':printf("Disha Patani");break;
case 'D':printf("Shradda Kapoor");break;
default:printf("ALL");
}
getch();
}