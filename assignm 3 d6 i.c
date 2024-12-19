///insertion sort
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array\n");
    for(k=0;k<n;k++)
    scanf("%d",&a[k]);
    for(i=1;i<n;i++)
      {int temp=a[i];
    for(j=i-1;j>=0;j--)
    {if(a[j]>temp)
    a[j+1]=a[j];
    else
        break;}

    a[j+1]=temp;
    }

    printf("the sorted array is\n");
    for(int k=0;k<n;k++)
        printf("%d\n",a[k]);


}
