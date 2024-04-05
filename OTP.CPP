#include<stdio.h>
#include<conio.h>
void main()
{
char user[20],pwd[20],ch;
int i=0;
clrscr();
printf("Enter user id ");
scanf("%s",user);
printf("Enter password ");
while((ch=getch())!=13)
{
printf("*");
pwd[i]=ch;
i++;
}pwd[i]='\0';
flushall();
printf("\nShow password [y/n] ");
scanf("%c",&ch);
if(ch=='y'||ch=='Y')
printf("Password is %s",pwd);
getch();
}