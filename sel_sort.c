#include<stdio.h>
void main()
{int k,m ,size=5,temp,i;
int x[]={9,1243,23,8,1};
for(k=0;k<size-1;k++)
{m=min_loc(x,k,size);temp=x[k];x[k]=x[m];x[m]=temp;} //assigning the min. value to 0th position of the array

    printf("the sorted elements are:");
    for(i=0;i<size;i++)
        printf("%d ,\n",x[i]);

}

int min_loc(int x[],int k,int size)
{int j,pos;
pos=k;
for(j=k+1;j<size;j++)
if(x[j]<x[pos])
pos=j;
return pos;
}
