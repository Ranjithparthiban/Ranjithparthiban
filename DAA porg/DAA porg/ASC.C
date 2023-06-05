#include <stdio.h>
#include<conio.h>
void main()
{
   int ar[30],n,i,j,target,ch;
clrscr();
printf("\t\t\t\tASCENDING AND DESCENDING ORDER");
printf("\n\t\tEnter the no of elements in the array:");
scanf("%d",&n);
printf("\t\tEnter your choice:\n\t\t1.Ascending\n\t\t2.Descending\n");
printf("\t\t");
scanf("%d",&ch);
for(i=0;i<n;i++)
{
printf("\n\t\tEnter the the %d element:",i+1);
printf("\t\t");
scanf("%d",&ar[i]);     }

   for (i = 1; i < n; i++)
 {
 target = ar[i];
j = i - 1;
 while (j >= 0 && ar[j] > target)
       {
	   ar[j + 1] = ar[j];
	   j = j - 1;
       }
       ar[j + 1] = target;
   }
if(ch==1)
{
for (i=0; i <n; i++)
      printf("\t\t%d ", ar[i]);
   }
else if(ch==2)
{
for(i=n-1;i>=0;i--)
printf("\t\t%d ",ar[i]);
}
else
{
printf("\n\t\tYou Entered the wrong choice!!");
}
   getch();
}