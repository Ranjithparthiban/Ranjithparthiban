#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,count=0;
clrscr();
printf("\t\t\t\tPRIME NUMBER");
printf("\n\t\tEnter the number to find the prime:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
printf("\n\t\tThe number is a prime number");
}
else
{
printf("\n\t\tThe number is not a prime number");
}
getch();
}