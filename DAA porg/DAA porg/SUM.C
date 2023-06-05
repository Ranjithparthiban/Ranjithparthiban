#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,sum=0;
clrscr();
printf("\t\t\t\tSUM OF SQUARE");
printf("\n\t\tenter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+(i*i);
}
printf("\n\t\tsum of square of %d is:%d",n,sum);
getch();
return 0;
}
