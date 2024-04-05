#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
char s1[50],s2[50],temp1,temp2;int i,j,k,t,l,n;
clrscr();
printf("Enter a string--");
gets(s1);
printf("Enter another string--");
gets(s2);
for(i=0;s1[i]!='\0';i++)s1[i]=tolower(s1[i]);
for(j=0;s2[j]!='\0';j++)s2[i]=tolower(s2[i]);
if(i==j)
{
for(k=0;k<=(i-2);k++)
{
for(t=k+1;t<=(i-1);t++)
{
if(s1[k]>s1[t])
{
temp1=s1[k];
s1[k]=s1[t];
s1[t]=temp1;
}
}
}
for(l=0;l<=(j-2);l++)
{
for(n=l+1;n<=(j-1);n++)
{
if(s2[l]>s2[n])
{
temp2=s2[l];
s2[l]=s2[n];
s2[n]=temp2;
}
}
}
if(stricmp(s1,s2)==0)
{
printf("It is an anagram");
}
else printf("It is not an anagram");
}
else printf("It is not an anagram");
getch();
}


