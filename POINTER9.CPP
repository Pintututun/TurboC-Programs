#include<stdio.h>
#include<conio.h>
void main()
{
int *p=NULL,i,j,*q=NULL;
clrscr();
puts("CAPITAL LETTERS\tSMALL LETTERS");
for(i=65,j=97;i<=90&&j<=122;i++,j++)
{
p=&i;
q=&j;
printf("%3c%c\t",*p,*q);

}
getch();
}
