#include<stdio.h>
#include<conio.h>
void main()
{
float c,f;
clrscr();
printf("Enter temperature in fahrenheit");
scanf("%f",&f);
c=(f-32)*5/9;
printf("%.1f Fahrenheit is %.1f%c Celsius",f,c,248);
getch();
}