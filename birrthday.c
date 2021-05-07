#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<dos.h>
int i,j,k,l;
char ha[20][20] = {'H','A','P','P','Y',' ','B','I','R','T','H','D','A','Y'}, you[100];
int main()
{
int coun = 1, n;
char r[200], r1[200];
clrscr();
printf("Enter your friend's name to wish ");
gets(you);
clrscr();
do
{
printf("  \n\n\t\t\tBirthday Wishes Platform");
printf("\n\n\t\t\t 1.Box Wishes");
printf("\n\t\t\t 2.Hide and Seek Wishes");
printf("\n\t\t\t 3.Journey to Wish");
printf("\n\t\t\t 4.Smiley Wishes");
printf("\n\t\t\t 5.FLASH NEWS");
printf("\n\t\t\t Press any key other than 1-5 to exit");
printf("\nToday is Your Birthday so Choose what you like to choose %s:",coun==1?"First":coun==2?"Second":coun==3?"Third":coun==4?"Fourth":coun==5?"Fifth":coun==6?"Sixth":"");
scanf("%d",&n);
coun++;
if(n>7||n<=0)
exit(0);
switch(n)
{
case 1:
show1(0);
break;
case 2:
show2(0);
break;
case 3:
show3(0);
break;
case 4:
show4(0);
break;
case 5:
show5(0);
break;
default:
exit(0);
}
}while(n>0||n<=7);
getche();
}
show1(i)
{
for(i=5;i>0;i--)
{
clrscr();
printf("\n\n\n\n\t\t\tBox will Appears within %ds",i);
sleep(1);
}
clrscr();
printf("\t");
for(i=0;i<1;i++)
{
for(j=0;j<14;j++)
{
printf("%4c",ha[i][j]);
}
}
printf("\n\t\t\t");
for(i=0;i<1;i++)
{
for(j=0;j<14;j++)
{
sleep(1);
if(j==5)
{
sleep(2);
printf("\n\t\t\t  HAPPY BIRTHDAY FRIEND\n\t\t\t\t %s", you);
continue;
}
printf("\n%10c\t\t\t\t\t\t\t%c",ha[i][j],ha[i][j]);
}
}
printf("\n\t\tGOD BLESS YOU & ALL YOUR DESIRES COMES TRUE");
sleep(4);
clrscr();
return 0;

}
int main()


{
 if(j==0)
printf("     FLASH  NEWS");
 if(j==1)
 printf("     FRESH  NEWS");
 if(j==2)
 printf("     NEWS UPDATE");
return 0;
}