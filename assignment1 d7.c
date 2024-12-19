//selection sort
#include<stdio.h>
void main()
{int k,m ,size=5,temp,i,n,j,x[50];
printf("enter the no. of elements:");
scanf("%d",&n);
printf("enter the elements of array:");
for(j=0;j<n;j++)
scanf("%d",&x[j]);
//int x[]={9,1243,23,8,1};
for(k=0;k<size-1;k++)
{m=min_loc(x,k,size);temp=x[k];x[k]=x[m];x[m]=temp;} //assigning the min. value to 0th position of the array

    printf("the sorted elements are:");
    for(i=0;i<size;i++)
        printf("%d ,\n",x[i]);

}

int min_loc(int x[],int k,int size)
{int j,pos;
pos=k;
for(j=k+1;j<size;j++)
if(x[j]<x[pos])
pos=j;
return pos;
}


// C program for implementation of selection sort
/*#include <stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		swap(&arr[min_idx], &arr[i]);
	}
}

 //Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{int m,arr[50];
printf("enter the no. of elements:\n");
scanf("%d",&m);
printf("enter the elements:\n");
for(int k=0;k<m;k++)
    scanf("%d",&arr[k]);
	//int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}*/
