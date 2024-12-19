#include<stdio.h>
void merge(int a1[],int n,int a2[],int m,int a3[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a1[i]<a2[j])
            a3[k++]=a1[i++];
        else
            a3[k++]=a2[j++];

    }
    ///copy kardo first array k remaining elements ko
       while(i<n)
       {
           a3[k++]=a1[i++];
       }
        ///copy kardo second array k remaining elements ko
        while(j<m)
            a3[k++]=a2[j++];

}
void print(int ans[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d, ",ans[i]);
}
int main()
{
    int a1[5]={1,3,5,7,9};
    int a2[3]={2,4,6};
    int a3[8]={0};
    merge(a1,5,a2,3,a3);
    print(a3,8);
    return 0;
}
