#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char user[20],pwd[20],cap[10];
clrscr();
printf("Enter user id--");
scanf("%s",user);
printf("Enter password--");
scanf("%s",pwd);
printf("Enter captcha--");
scanf("%s",cap);
if(strcmp(user,"Nareshit")==0&&strcmp(pwd,"Nit123")==0&&strcmp(cap,"Hyd123")==0)
puts("Welcome to SBI");
else puts("Invalid User id/Password/Captcha");
getch();
}