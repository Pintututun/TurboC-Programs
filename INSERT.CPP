#include<stdio.h>
#include<conio.h>
int b[51];
void main()
{
int a[51],i,j,temp,n,m;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter %d number-",i+1);
scanf("%d",&a[i]);
}
printf("Enter the element to insert-");
scanf("%d",&m);
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
{
if(a[i]>m)
{
temp=a[i];
a[i]=m;
b[i]=temp;
}
}
puts("ELEMENTS AFTER INSERTING----");
for(i=0;i<=n;i++)
{
printf("%4d",b[i]);
}
getch();
}

