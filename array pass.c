#include<stdio.h>
int main()
{int n;
printf("enter the number of elements to be declared in array:");
scanf("%d",&n);


    int a[n],i;
printf("enter array elemnts:");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);



    display(a,n);
    sum(a ,n);
    average (sum(a,n),n);
    getch();
    return 0;
    }



    int display(int a[] ,int b)//function definition to display the each elements separately
        {int i;
    for(i=0;i<b;i++)
    printf("the elements of a[%d] array is %d\n",i,a[i]);
    return 0;
    }

    int sum(int a[],int c)//function definition for adding all elements of the array
    {
        int j,temp=0;
        for(j=0;j<c;j++)
        temp=temp+a[j];
        printf("the sum of all elements of the array a[] is %d\n",temp);
        return 0;

    }

    int average(int a,int b)
    {
       int avg;

       avg=a/b;
       printf("the average is %d\n",avg);
       return 0;
    }
