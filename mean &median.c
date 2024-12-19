#include<stdio.h>
void main()
{int x1[7]={5,2,6,3,4,1,7};
int x2[6]={3,4,6,8,9,1};
int x3[13],i,j,k;
for(i=0;i<7;i++)
x3[i]=x1[i];
for(j=0;j<6;j++)
x3[7+j]=x2[j];
for(i=0;i<13;i++)
printf("%d,",x3[i]);


//sorting the array3

for(j=12;j>0;j--)
    for(k=0;k<j;k++)
    if(x3[k]>x3[k+1])
    swap(&x3[k],&x3[k+1]);
printf("\n sorted array is: \n");
for(i=0;i<13;i++)
printf("\n%d \n",x3[i]);
int sum=0,median;float mean;
for(i=0;i<13;i++)
    sum=sum+x3[i];
mean=sum/13;
printf("mean of elements of the array3: %f\n",mean);
printf("median of the array3 is :%d\n",x3[6]);

}
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;

}
