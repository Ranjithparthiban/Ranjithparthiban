#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,fact=1;
clrscr();
printf("\t\t\t\tFACTORIAL\n");
printf("\t\tenter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=(fact*i);
}
printf("\t\tfactorial of %d is:%d",n,fact);
getch();
return 0;
}
