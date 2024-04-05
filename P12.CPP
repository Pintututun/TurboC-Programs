#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
char op;
float a,b;
start:
clrscr();
puts("***********************************************************************");
printf("Enter two numbers--");
scanf("%f , %f",&a,&b);
puts("************************************************************************");
puts("\t\t\tMENU");
puts("************************************************************************");
puts("\t\t\t+.Add");
puts("\t\t\t-.Sub");
puts("\t\t\t*.Mul");
puts("\t\t\t%.Mod");
puts("\t\t\t/.Div");
puts("\t\t\t^.Pow");
puts("\t\t\tE.exit");
puts("**************************************************************************");
printf("\t\t\t Enter your option[ ]\b\b");flushall();
scanf("%c",&op);
gotoxy(50,20);
switch(op)
{
case '+':printf("Sum =%.2f",a+b);break;
case '-':printf("Sub =%.2f",a-b);break;
case '*':printf("Mul =%.2f",a*b);break;
case '%':printf("Mod =%.2f",fmod(a,b));break;
case '/':printf("Div =%.2f",a/b);break;
case '^':printf("Pow =%.2f",pow(a,b));break;
case 'e':case 'E':return;
default:printf("Invalid selection");
}
getch();
goto start;
}