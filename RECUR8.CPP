#include<stdio.h>
#include<conio.h>
int i;
char s2[50];
char *stcpy(char *p)
{
if(*p!='\0')
{
s2[i]=*p;
p++;
i++;
stcpy(p);
}
return s2;
}
void main()
{
char s1[50];
clrscr();
printf("Enter a string--");
gets(s1);
puts(stcpy(s1));
getch();
}