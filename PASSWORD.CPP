#include<stdio.h>
#include<conio.h>
void main()
{
int c=0,k=0,i;
char a[20];
clrscr();
xy:
xyz:
printf("Enter password\n");
gets(a);
for(c=0,k=0,i=0;a[i]!='\0';i++)c++;
if((c>=10&&c<=15)&&(a[0]>='A'&&a[0]<='Z'))
{
for(i=1;i<c;i++)
{
if(a[i]>='A'&&a[i]<='Z'||a[i]==' '){break;}
else if(!(a[i]>='a'&&a[i]<='z')&&(a[i]>='0'&&a[i]<='9'))k=1;
}
if(k==1)printf("Strong Password");
else
{ printf("Invalid Password\n");k=0; goto xy;}
}
else {printf("Invalid Password\n"); goto xyz;}
getch();
}
