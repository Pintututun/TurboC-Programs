#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char id[20],name[20],grade[20];
int odia,eng,hin,mat,sci,soc,tot;
float avg;
clrscr();
printf("Enter stu id--");
gets(id);
flushall();
printf("Enter stu name-");
gets(name);
odia:printf("Enter odia marks--");
scanf("%d",&odia);
if(odia<0||odia>100)
{
puts("Marks 1-100 Only");
goto odia;
}
english:printf("Enter English marks--");
scanf("%d",&eng);
if(eng<0||eng>100)
{
puts("Marks 1-100 Only");
goto english;
}
hindi:printf("Enter Hindi Marks--");
scanf("%d",&hin);
if(hin<0||hin>100)
{
puts("Marks 1-100 Only");
goto hindi;
}
maths:printf("Enter Math marks--");
scanf("%d",&mat);
if(mat<0||mat>100)
{
puts("Marks 1-100 Only");
goto maths;
}
science:printf("Enter science marks--");
scanf("%d",&sci);
if(sci<0||sci>100)
{
puts("Marks 1-100 Only");
goto science;
}
social:printf("Enter social marks--");
scanf("%d",&soc);
if(soc<0||soc>100)
{
puts("Marks 1-100 Only");
goto social;
}
tot=odia+eng+hin+mat+sci+soc;
avg=tot/6.0;
if(odia>=35&&eng>=35&&hin>=35&&mat>=35&&sci>=35&&soc>=35)
{
if(avg>=80)strcpy(grade,"Distinction");
else if(avg>=60)strcpy(grade,"1st class");
else if(avg>=50)strcpy(grade,"2nd class");
else strcpy(grade,"3rd class");
}
else strcpy(grade,"Fail");
puts("ID\t\tNAME\t\tTOT\t\tTAVG\tGRADE");
puts("--------------------------------------------------------------------------------");
printf("%s\t%s\t%d \t %.2f \t%s",id,name,tot,avg,grade);
getch();
}
