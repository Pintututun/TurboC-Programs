#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0;
clrscr();
printf("Enter a no.");
scanf("%d",&n);
for(i=1;i<n;i++)printf("%d+",i,s+=i);
printf("%d=%d",i,s+i);
getch();
}
