#include<stdio.h>
#include<conio.h>
void add(int a,int b)
{
int sum;
sum=a+b;
printf("ADDITION=%d\n",sum);
}
void minus(int a,int b)
{
int sub;
sub=(a>b)?(a-b):(b-a);
printf("Subtraction=%d\n",sub);
}
void into(int a,int b)
{
int mul;
mul=a*b;
printf("MULTIPLICATION=%d\n",mul);
}
void hariba(int a,int b)
{
int div;
div=(a>b)?(a/b):(b/a);
printf("DIVISON=%d\n",div);
}
void main()
{
int x,y;
clrscr();
printf("Enter two numbers--");
scanf("%d %d",&x,&y);
add(x,y);
minus(x,y);
into(x,y);
hariba(x,y);
getch();
}

