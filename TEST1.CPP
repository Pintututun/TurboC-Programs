#include<stdio.h>
#include<conio.h>
void main()
{
float a,b;
int op;
clrscr();
printf("\nENTER 1st Number-");
scanf("%f",&a);
printf("\nENTER 2nd Number-");
scanf("%f",&b);
puts("-------------------------------------------------------------------");
puts("\nEnter 1 for addition");
puts("\nEnter 2 for subtraction");
puts("\nEnter 3 for multiplication");
puts("\nEnter 4 for division");
puts("\nEnter your option[ ]");scanf("%d\b\b",&op);
switch(op)
{
case 1:printf("Addition=%f",a+b);break;
case 2:printf("Subraction=%f",a-b);break;
case 3:printf("Multiplication=%f",a*b);break;
case 4:printf("Division=%f",a/b);break;
default:printf("Invalid Number");
}
getch();
}
