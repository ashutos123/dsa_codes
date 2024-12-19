void swap(int *a,int *b)
{
    int temp=*a;               /* This function takes first element as pivot, places
                                the pivot element at its correct position in sorted
                                array, and places all smaller (smaller than pivot)
                                 to left of pivot and all greater elements to right
                                     of pivot */
    *a=*b;
    *b=temp;                                 /**do pointrs liye i aur j,i ko 0 index pe rakha j ko last index pe rakha
}                                                    agar shuru k elements pivot se chhote hain to i ko ++ kate jayenge
                                                   aur yadi last lelements pivot se bade honge tab j ko -- karte jayenge.
                                                   is tarah se pivot ik aisi position pe aa jayhga ki uske left k sare elememnts usse chhote
                                                   hionge aur right ke bade honge   .isi ko recursuively karenge bar bar.*/
int partition(int a[],int l,int h)
{
    int i=l;
    int j=h;
    int pivot=a[l];
    while(i<j)
    {
        while(a[i]<=pivot) i++;
        while(a[j]>pivot) j--;
        if(i<j)
            swap(&a[i],&a[j]);


    }
   swap(&a[j],&a[l]);
   return j;

}

void quicksort(int a[],int l,int h)
{
    if(l<h)
        {int pivot=partition(a,l,h);
    quicksort(a,l,pivot-1);
    quicksort(a,pivot+1,h);}
}
int main()
{
    int a[6]={4,1,8,3,7,5};
    quicksort(a,0,5);
    for(int i=0;i<6;i++)
        printf("%d\n",a[i]);
    return 0;

}
/*#include <stdio.h>

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
/*int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i
        = (low
           - 1); // Index of smaller element and indicates
                 // the right position of pivot found so far

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
/*void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        /* pi is partitioning index, arr[p] is now
        at right place */
       /* int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/* Function to print an array */
/*void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ",arr[i]);

}*/

// Driver Code
/*int main()
{
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("sorted araye is \n");
    printArray(arr, n);
    return 0;
}*/
