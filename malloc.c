#include<stdio.h>
int main()
{
    int n,m,i,j=0,k,*ptr;
    printf("enter the no. of elements:");
    scanf("%d",&n);

          ptr=(int*)malloc(n*sizeof(int));


          printf("enter the elements of the array:");

          for(i=0; i<n; i++)
          scanf("%d",(ptr+i));

          printf("the elements of array is:");

          for(i=0; i<n; i++)
              printf("%d \n",*(ptr+i));

              for(i=0; i<n; i++)
                  j=j+*(ptr+i);

                  printf("the sum of all elements of the array is %d:",j);

        }





/*  #include<stdio.h>
int main()
{
    int n,m,i,j=0,k,*ptr;
    printf("enter the no. of elements:");
    scanf("%d",&n);

          ptr=(int*)calloc(n,sizeof(int));


          printf("enter the elements of the array:");

          for(i=0; i<n; i++)
          scanf("%d",(ptr+i));

          printf("the elements of array is:");

          for(i=0; i<n; i++)
              printf("%d \n",*(ptr+i));

              for(i=0; i<n; i++)
                  j=j+*(ptr+i);

                  printf("the sum of all elements of the array is %d:",j);

        }*/






///finding max and min of given set of numbers   using dynamic memory allocation

/*#include<stdio.h>
int main()
{
    int i,j,n,a,b,min=9999,*ptr, max=1;

    printf("enter the size of the array:");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
    printf("enter the elements of the array:");

    for(i=0; i<n; i++)
        scanf("%d",(ptr+i));
    printf("the elements of the array are:");
    for(i=0; i<n; i++)
        printf("%d ,",*(ptr+i));


    for(i=0; i<n; i++)
    {
        if(*(ptr+i)<min)
            min=*(ptr+i);
    }
    printf("\nthe smallest value is:%d",min);

    for(i=0; i<n; i++)
        if(*(ptr+i)>max)
            max=*(ptr+i);
    printf("\n the largest value is :%d",max);

}*/
























