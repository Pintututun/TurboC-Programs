#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a=10.5,b=3.3;
clrscr();
printf("Sum=%.2f\n",a+b);
printf("Sub=%.2f\n",a-b);
printf("Mul=%.2f\n",a*b);
printf("Mod=%.2f\n",fmod(a,b));
printf("Div=%.2f",a/b);
getch();
}