#include<stdio.h>
int main()
{/*int i,j,k,n;
int a[100];
printf("enter the size of  the array");
scanf("%d",&n);
printf(" enter the elements of the array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);


///deletion of an element
printf("enter the position to delete the element from");
scanf("%d",&k);
for(int j=k-1;j<=n-2;j++)
    a[j]=a[j+1];

    printf("the elements of deleted arrays is :");
    for(int l=0;l<n-1;l++)
        printf("%d \n",a[l]);*/




 int i,j,k,n;
int a[100];
printf("enter the size of  the array");
scanf("%d",&n);
printf(" enter the elements of the array");
for(i=0;i<n-1;i++)
scanf("%d",&a[i]);

printf("enter the position at which the element has to inserted");
scanf("%d",&k);
printf("enter  the element to be inserted");
scanf("%d",&j);
for(int i=n-1;i>=k;i--)
    a[i]=a[i-1];
a[k-1]=j;
printf("elements of the new array is :\n");
for(int i=0;i<n;i++)
printf("%d\n",a[i]);



}
