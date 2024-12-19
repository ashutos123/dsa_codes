
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};



void main()
{int n;
printf("enter the no. of nodes of linked list");
scanf("%d",&n);
struct node *head=(struct node *)malloc(sizeof(struct node));
printf("enter the elements of list:\n");
scanf("%d",&(head->data));
head->next=NULL;
int i;
struct  node *ptr;
ptr=head;

for(i=1;i<n;i++)
{
    struct node *newnode=malloc(sizeof(struct node));
    scanf("%d",&(newnode->data));
    newnode->next=NULL;
    ptr->next=newnode;
    ptr=ptr->next;
}
ptr=head;
printf("list of items are :\n");
while(ptr!=NULL)
{
    printf("%d ",ptr->data);
    ptr=ptr->next;
}


    return 0;


}
