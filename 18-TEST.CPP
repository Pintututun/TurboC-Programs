#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char s[50];
int k;
clrscr();
printf("Enter a string--");
gets(s);
for(k=0;s[k]!='\0';k++)
if(s[k]==' '&&s[k+1]!=' ')
s[k]='9';
puts("After removing spaces---");
for(k=0;s[k]!='\0';k++)
if(s[k]!='9')
printf("%c",s[k]);
getch();
}