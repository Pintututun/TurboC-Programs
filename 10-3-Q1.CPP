#include<stdio.h>
#include<conio.h>
void main()
{
char s[50];
int i,c=0,d=0,space=0,special;
clrscr();
printf("Enter a string--");
gets(s);
for(i=0;s[i]!='\0';i++)
{
if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))c++;
else if(s[i]>='0'&&s[i]<='9')d++;
else if(s[i]>=32)space++;
else special++;
}
printf("Number of characters-%d\n",c);
printf("Number of digits-%d\n",d);
printf("Number of spaces-%d\n",space);
printf("Number of special characters-",special);
getch();
}