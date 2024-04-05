#include<stdio.h>
#include<conio.h>
#include<string.h>
void vote(char *p,char *q,int *a)
{
char s2[]="Indian";
if(stricmp(s2,p)!=0)
{
if((*a)>=18&&(*a)<=80)
{
printf("%s YOUR ARE ELIBILE",q);
}
else printf("INVALID AGE");
}
else printf("INVALID COUNTRY");
}
void main()
{
char s[10],name[25];
int age;
clrscr();
printf("Enter your name--");
gets(name);
printf("Enter your origin--");
gets(s);
printf("Enter your age--");
scanf("%d",&age);
vote(s,name,&age);
getch();
}
