///bubble sort

#include<stdio.h>
void main()
{printf("enter the no. of elements to be sorted\n"); int n; scanf("%d",&n);
    int x[n];int size=n;

    printf("enter the elements to be sorted\n");
for(int i=0;i<n;i++)

    scanf("%d",&x[i]);

bubble_sort(x,size);

printf("the elements are sorted as: ");
for(int i=0;i<size;i++)
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
