#include<stdio.h>
int  main()
{int arr[]={1,2,3,4,5,6,7,8,9};int i;

{printf("the address of all elements of the given array is:\n");
for(i=0;i<=8;i++)
printf("%d\n",&(arr[i]));
printf("the address of all elements of the given array is:\n");
for(i=0;i<=8;i++)
printf("%d\n",arr+i);

printf("the sum of all elements o the given array is:%d",sum(arr));

getch();

return 0;

}

int  sum(int arr[])
{int s=0,j;
for(j=0;j<=8;j++)
s=s+*(arr+j);

return s;
}



