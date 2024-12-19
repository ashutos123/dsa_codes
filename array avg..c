#include<stdio.h>
 void main()
 {int a[5],i,sum=0;float avg;


 printf("please enter the elements of array:");
 for (i=0;i<5;i++)
 scanf("%d",&a[i]);
for (i=0;i<5;i++)
sum=sum+a[i];
avg=sum/5;
printf("the averag of elements of the array is %f",avg);

 }
