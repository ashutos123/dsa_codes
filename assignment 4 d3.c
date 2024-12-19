///searching element in linked list

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void main()
{
    int n,key;
    printf("enter the no. of elements of linked list :\n");
    scanf("%d",&n);
    struct node *head=malloc(sizeof(struct node));
    struct node *newnode=malloc(sizeof(struct node));
    printf("enter the  element of the list\n");
    scanf("%d",&(head->data));
    head->next=NULL;

    struct node *ptr;
    ptr=head;
    int i;

    for(i=1;i<n;i++)
    {
        struct node *newnode=malloc(sizeof(struct node) );
        scanf("%d",&(newnode->data));
        newnode->next=NULL;
        ptr->next=newnode;
        ptr=ptr->next;
    }
    printf("the elements of list are :\n");

    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }

    ///searching element
    int count=0;
  ptr=head;
  printf("enter the key element to be found:\n");
   scanf("%d",&key);
   while(ptr->data!=key &&ptr!=NULL)
   {count++;
   ptr=ptr->next;
   }
    printf("%d is found at location %d \n",key,count);


   }
