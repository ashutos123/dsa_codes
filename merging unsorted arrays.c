#include<stdio.h>
void main()
{
    int a1[50],a2[50],n,m,s,a3[50];
    printf("enter the size of first array :");
    scanf("%d",&n);
    printf("enter the elements of first array :");

    for(int i=0;i<n;i++)
        scanf("%d",&a1[i]);
        printf("enter the size of second array :");

        scanf("%d",&m);

        printf("enter the elements of second array :");
        for(int j=0;j<m;j++)
        scanf("%d",&a2[j]);
        s=m+n;
        for(int i=0;i<n;i++)
        a3[i]=a1[i];
        for(int i=n;i<s;i++)
        a3[i]=a2[i-n];
        printf("the elements of merged array is :");

        for(int i=0;i<s;i++)
            printf("%d ,",a3[i]);



}
