#include<stdio.h>
#include<conio.h>
void main()
{
int i;
for(i=getchar();;i=getchar())
if(i=='x')
break;
else
putchar(i);
getch();
}

