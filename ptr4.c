#include<stdio.h>
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9};

    printf("the average of all elements of the given array is %d\n",avg(arr,9));

    printf("the reversed order of elements of the given array is :\n");

int a[8],i;

for(i=0;i<=8;i++)
    a[i]=*(arr+(8-i));
for(i=0;i<=8;i++)
    printf("%d,",a[i]);
    getch();
    return 0;

}

int avg(int arr[],int a)
{
    int s=0,j, t;
    for(j=0; j<=8; j++)
        s=s+*(arr+j);

    t=(s/a);

    return t;

}
