#include <stdio.h>

#include<conio.h>

void insertionSort(int a[], int n)
{
    int j,temp, i;
    
    for(i=1;i<=n;i++)
    {   temp=a[i];
    j=i-1;
}
while(j>n&&a[j]>temp)
{
	a[j+1]=a[j];
	j--;
}
a[j+1]=temp;
}

void printArray(int arr[], int size)
{
	int i;
	for (i=1; i <=size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void main()
{
	int arr[10],n,k;
	printf("\nEnter number of elements in array");
	scanf("%d",&n);

	printf("\nEnter %d array elements: ", n);
	for(k=1;k<=n;k++)
	{
	printf("\nEnter %d element: ",k);
	scanf("%d",&arr[k]);
	}
	insertionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	getch();
}
