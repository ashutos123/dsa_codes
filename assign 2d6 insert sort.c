///merge sort
#include<stdio.h>
#include<stdlib.h>
{merge(int a[],int l,int m,int r)
int i,j,k;
int n1=m-l+1;
int n2=r-m;
int L[n1],R[n2];
for(int i=0;i<n;i++)
    L[i]=a[l+1];
for(j=0;j<n2;j++)
    R[j]=a[m+1+j];
i=0;j=0;k=l;
while(i<n1 &&j<n2)
{
    if(L[i]<R[j])
    {
        a[k]=L[i];i++;
    }
    else{a[k]=R[j];
    j++;}
    k++;

}
while(i<n1)
    a[k++]=L[i++];
while(j<n2)
    a[k++]=R[j++];

}
void mergesort(int a[],int l,int r)
if(l<r)
{
    int m=l+(r-l)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);

}

int main()
{
    int n,k;
    printf("enter the sizer of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter array elelements\n");
    for(k=0;k<n;k++)
        scanf("%d",&a[k]);
    mergesort(a,0,n-1);
    printf("sorted array is\n");
    for(int k=0;k<n;k++)
        printf("%d\n",a[k]);


}

















