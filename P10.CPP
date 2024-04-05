#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
int op;
float d1,d2;
start:
clrscr();
puts("**************************************************************************");
puts("\t\t\tMENU");
puts("**************************************************************************");
puts("\t\t\t1.Circle area");
puts("\t\t\t2.Circumference");
puts("\t\t\t3.Rectangle area");
puts("\t\t\t4.Square area");
puts("\t\t\t5.Triangle area");
puts("\t\t\t6.Exit");
puts("**************************************************************************");
printf("\t\t\tEnter your option[ ]\b\b");
scanf("%d",&op);
switch(op)
{
case 1:printf("Enter circle radius");
       scanf("%f",&d1);
       gotoxy(50,20);
       printf("Area=%.2f",pi*d1*d1);break;
case 2:printf("Enter circle radius");
       scanf("%f",&d1);
       gotoxy(50,20);
       printf("Circumference=%.2f",2*pi*d1);break;
case 3:printf("Enter rectangle length and breadth");
       scanf("%f%f",&d1,&d2);
       gotoxy(50,20);
       printf("Area=%.2f",d1*d2);break;
case 4:printf("Enter square side");
       scanf("%f",&d1);
       gotoxy(50,20);
       printf("Area=%.2f",d1*d1);break;
case 5:printf("Enter Triangle base and height");
       scanf("%f%f",&d1,&d2);
       gotoxy(50,20);
       printf("Area=%.2f",0.5*d1*d2);break;
case 6:return;
default:gotoxy(50,20);
	puts("Invalid selection");
}
getch();
goto start;
}


