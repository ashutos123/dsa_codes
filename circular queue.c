
#include<stdio.h>
#define n 5
int front=-1,rear=-1;
int queue[n];
int x;
void enqueue(int x)
{
    if(front ==-1 && rear==-1)
    {front=0;rear=0;
    queue[rear]=x;}

    if(front==(rear+1)%n);
    printf("queue is full\n");

    { rear=(rear+1)%n;
     queue[rear]=x;
    }

}

void display()
{int i=front;
    if(front==rear==-1)
        printf("empty\n");
    else
    printf("elements are\n");
    while(i!=rear)
    {
        printf("%d\n",queue[i]);
        i=(i+1)%n;
    }
   printf("%d\n",queue[rear]);



}
 int main()
 {
   printf("1. enqueue\n");
   printf("2.display\n");
   int ch;
   printf("enter the choice :\n");
   scanf("%d",&ch);
   switch(ch)
   {case 1:

   printf("enter the elemnt to insert in queue");
   scanf("%d",&x);
   enqueue(x);
   case 2:
   //printf("the elemnts are:\n");
   display();}

return 0;

 }
