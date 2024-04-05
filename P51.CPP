#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define p  printf
#define m  main()
#define c  clrscr
void m
{
float r,area,cf;
c();
p("Enter radius");
scanf("%f",&r);
area=pi*r*r;
cf=2*pi*r;
gotoxy(20,10);
p("Area=%.2f,Circumference=%.2f",area,cf);
getch();
}