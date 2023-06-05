#include <stdio.h>
#include<conio.h>
void mergeSort(int [], int, int, int);
void merge(int [],int, int);
int main()
{
    int list[50];
    int i, size;
    clrscr();
    printf("\t\t\t\tMERGESORT");
    printf("\n\t\tEnter total number of elements:");
    scanf("\t\t%d", &size);
    printf("\t\tEnter the elements:\n");
    for(i = 0; i < size; i++)
    {
	 printf("\n\t\t");
	 scanf("%d", &list[i]);
    }
    merge(list, 0, size - 1);
    printf("\t\tAfter merge sort:");
    for(i = 0;i < size; i++)
    {
	 printf("%d ",list[i]);
    }
     getch();
   return 0;
}

void merge(int list[],int low,int high)
{
    int mid;

    if(low < high)
    {
	mid = (low + high) / 2;
	merge(list, low, mid);
	merge(list, mid + 1, high);
	mergeSort(list, low, mid, high);
    }
}

void mergeSort(int list[],int low,int mid,int high)
{
    int i, mi, k, lo, temp[50];

    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high))
    {
	if (list[lo] <= list[mi])
	{
	    temp[i] = list[lo];
	    lo++;
	}
	else
	{
	    temp[i] = list[mi];
	    mi++;
	}
	i++;
    }
    if (lo > mid)
    {
	for (k = mi; k <= high; k++)
	{
	    temp[i] = list[k];
	    i++;
	}
    }
    else
    {
	for (k = lo; k <= mid; k++)
	{
	     temp[i] = list[k];
	     i++;
	}
    }

    for (k = low; k <= high; k++)
    {
	list[k] = temp[k];
    }
}