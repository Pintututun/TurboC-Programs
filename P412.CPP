#include<stdio.h>
#include<conio.h>
void main()
{
long int a[50],n,i,j,c=0;
clrscr();
printf("Enter the size from 1-50-");
scanf("%ld",&n);
start :
if(n<50)
{
for(i=0;i<n;i++)
{
printf("Enter the %ld element-",i+1);
scanf("%ld",&a[i]);
}
}
else goto start;
puts("----------------UNIQUE ELEMENTS ARE---------------------------------");
for(i=0;i<n;i++)
{
c=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
{
c++;
}
}
if(c==1)
{
printf("%4ld",a[i]);
}
}
getch();
}
