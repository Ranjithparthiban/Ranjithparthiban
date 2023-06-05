#include<stdio.h>
#include<conio.h>
void quicksort(int number[25],int first,int last){
int i, j, pivot, temp;
if(first<last){
pivot=first;
i=first;
j=last;
while(i<j)
{
while(number[i]<=number[pivot]&&i<last)
i++;
while(number[j]>number[pivot])
j--;
if(i<j){
temp=number[i];
number[i]=number[j];
number[j]=temp;
}
}
temp=number[pivot];
number[pivot]=number[j];
number[j]=temp;
quicksort(number,first,j-1);
quicksort(number,j+1,last);
}
}
int main(){
int i, count, number[25];
clrscr();
printf("\t\t\t\tQUICKSORT");
printf("\n\t\tEnter some elements (Max. - 25): ");
scanf("%d",&count);
printf("\t\tEnter %d elements: ",count);
for(i=0;i<count;i++)
{printf("\n\t\t");
scanf("%d",&number[i]);}
quicksort(number,0,count-1);
printf("\t\tThe Sorted Order is: ");
for(i=0;i<count;i++)
printf("%d ",number[i]);
getch();
return 0;
}