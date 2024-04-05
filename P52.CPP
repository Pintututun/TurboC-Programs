#include<stdio.h>
#include<conio.h>
void main()
{
float c,f;
clrscr();
printf("Enter temp in celsius");
scanf("%f",&c);
f=c*1.8+32;
printf("%.1f%c celsius==%.1f Fahrenheit ",c,248,f);
getch();
}