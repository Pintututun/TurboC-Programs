#include<stdio.h>
#include<conio.h>
struct complex
{
float a;
float b;
}q1,q2;
void main()
{
float s1,s2;
clrscr();
puts("Enter the value of 1st complex number--");
printf("Enter the value of imaginary number--");
scanf("%f",&q1.a);
printf("Enter the value of real number--");
scanf("%f",&q1.b);
puts("Enter the value of 2nd complex number--");
printf("Enter the value of imaginary number--");
scanf("%f",&q2.a);
printf("Enter the value of real number--");
scanf("%f",&q2.b);
s1=q1.a+q2.a;
s2=q1.b+q2.b;
puts("After addition the complex number is--");
printf("%.2f",s1);
printf("i");
printf("%.2f",s2);
getch();
}


