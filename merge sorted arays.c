#include<stdio.h>
void main()
{
    int a[5]={1,4,7,8,10};
    int b[3]={2,3,9};
    for(int i=0;i<5;i++)
        if(a[i]>b[0])
    {
    swap(&a[i],&b[0]);
    bubble_sort(b,3);
    }
int c[8];
for(int f=0;f<5;f++)
c[f]=a[f];
for(int g=5;g<=7;g++)
    c[g]=b[g];
printf("merged sorted array is:");
for(int d=0;d<8;d++)
  printf("%d,",c[d]);
}
void bubble_sort(int x[],int n)

{int j,k;
for(j=n-1;j>0;j--)
for(k=0;k<j;k++)
if(x[k]>x[k+1])

swap(&x[k],&x[k+1]);

}

void swap(int *a,int *b)
{int t=*a;
*a=*b;
*b=t;
}
