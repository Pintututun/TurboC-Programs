#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,*i,*q,*k;
clrscr();
i=&a;
q=&b;
k=&c;
printf("Enter 3 Numbers--");
scanf("%d %d %d ",&a,&b,&c);
if(((*i)==(*q))&&((*q)==(*k)))printf("ALL are equal");
else if(((*i)>(*q))&&((*i)>(*k)))printf("%d is big",*i);
else if(((*q)>(*i))&&((*q)>(*k)))printf("%d is big",*q);
else if(((*k)>(*i))&&((*k)>(*q)))printf("%d is big",*k);
else printf("ALL are unequal");
getch();
}

