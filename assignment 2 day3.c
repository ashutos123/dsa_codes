/*#include<stdio.h>
void main()
{
   int arr[8]={2,4,5,7,9,10,23,45};
   int s=0,e=7,mid=(s+e)/2;
   int key=2;
   while(s<e)
   {
       if(arr[mid]<key)
       s=mid+1;
       else
        if(arr[mid]==key)
        {printf("the element %d is found at location %d",key,mid);
        break;}

        else
       e=mid-1;

       mid=(s+e)/2;

       }
if(s>e)
printf("%d is not present in the array",key);
return 0;
}*/

///recursive binary search
#include<stdio.h>
#include<stdlib.h>
int bin_search(int arr[],int s,int e,int key)
{
    if(s>e)
        return 0;///means false

    int mid=(s+e)/2;
    if(arr[mid]==key)
    return 1;
    else
    if(arr[mid]<key)
        return bin_search(arr,mid+1,e,key);
       else
       if(arr[mid]>key)
       return bin_search(arr,s,mid-1,key);
    }

void main()
{
    int arr[8]={2,4,5,7,9,10,23,45};
   printf("present or not present: %d\n",bin_search(arr,0,7,12));
}

