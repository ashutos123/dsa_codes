/*#include<stdio.h>


void radixsort(int a[],int n)
{
    int max=getmax(a,n);
    for(int pos=1;max/pos>0;pos*10)
    {
        countsort( a, n, pos);
    }

}

void countsort(int a[],int n,int pos)
{  int b[50];
    int count[10]={0};
    for(int i=0;i<n;i++)
        ++count[(a[i]/pos)%10];
    for(int i=1;i<n-1;i++)
      count[i]=count[i]+count[i-1];
    for(int i=n-1;i>=0;i--)
        b[--count[(a[i]/pos)%10]]=a[i];
    for(int i=0;i<n;i++)
        a[i]=b[i];


}
int getmax(int a[],int n)
{
  int mx=a[0];
  for(int i=1;i<n;i++)
        if(a[i]>mx)
        mx=a[i];
  return mx;
}

int main()
{
    int a[7]={234,13,674,390,3,36,8};
    radixsort(a,7);
    for(int j=0;j<7;j++)
    printf("%d\n",a[j]);
    return 0;
}*/


#include <stdio.h>


// A utility function to get maximum value in arr[]
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

// A function to do counting sort of arr[] according to
// the digit represented by exp.
void countSort(int arr[], int n, int exp)
{
    int output[n]; // output array
    int i, count[10] = { 0 };

    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// The main function to that sorts arr[] of size n using
// Radix Sort
void radixsort(int arr[], int n)
{
    // Find the maximum number to know number of digits
    int m = getMax(arr, n);

    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // where i is current digit number
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

// A utility function to print an array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\n",arr[i]);
}

// Driver Code
int main()
{
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
    int n = sizeof(arr) / sizeof(arr[0]);

      // Function Call
      radixsort(arr, n);
    print(arr, n);
    return 0;
}









