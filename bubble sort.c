#include<stdio.h>
void main()
{int x[]={5,3,7342,23,102,5444};int i,size=6;

bubble_sort(x,size);

printf("the elements are sorted as: ");
for(i=0;i<size;i++)
    printf("%d,",x[i]);

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
