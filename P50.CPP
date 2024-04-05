#include<stdio.h>
#include<conio.h>
void main()
{
const float pi=3.14;
float r,area,cf;
clrscr();
printf("Enter radius");
scanf("%f",&r);
area=pi*r*r;
cf=2*pi*r;
gotoxy(50,20);
printf("AREA=%.2f,Circumference=%.2f",area,cf);
getch();
}