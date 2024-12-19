
#include<stdio.h>
main()
{int x,y;
int *ptr;
x=10;ptr=&x;y=*ptr;

printf("%d is stored in location %u\n",x,&x);

printf("%d is stored in location %u\n",*&x,&x);
printf("%d is stored in location %u\n",*ptr,ptr);
printf("%d is stored in location %u\n",y,&*ptr);
printf("%u is stored in location %u\n",ptr,&ptr);
printf("%d is stored in location %u\n",y,&y);

*ptr=28;
printf("\n now x=%d\n",x);
printf("%d\n",sizeof(double));
int arr[]={1,2,3,4,5,6,5,76,87,23};
printf("the address of first element of array is %d\n",&arr[0]);
printf("the address of first elment of array is %d\n",arr);
printf("the address of second elememt of array is %d\n",arr+1);
printf("the address of second elememt of array is %d\n",&arr[1]);
printf("the content of first element of array is %d\n",*(&arr[0]));
printf("the content of first elment of array is %d\n",*arr);
printf("the content of second elememt of array is %d\n",*(arr+9));
printf("the content of second elememt of array is %d\n",*(&arr[1]));

printf("the content of second elememt of array is %d\n",*(arr+1));



}



