#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node*next;
};


void main()
{int n;
    printf("enter the no . of elements of linked list\n");
    scanf("%d",&n);
   struct node *head=(struct node*)malloc(sizeof(struct node));
   printf("enter the elements of linked list:\n");
   scanf("%d",&(head->data));
   head->next=NULL;
   struct node *ptr=(struct node*)malloc(sizeof(struct node));
   ptr=head;



   for(int i=1;i<n;i++)
   {struct node *newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(newnode->data));
    newnode->next=NULL;
    ptr->next=newnode;
    ptr=ptr->next;

    }
    int ch;
    printf("enter choice:1:deleting at first pos ,2:deleting at any other position,3:delete a given value\n");
    scanf("%d",&ch);
switch(ch)
{///deleting at first position
case 1:
{ptr=head;
head=ptr->next;
free(ptr);
ptr=head;
printf("  linked list after deleting first item is \n");
     while(ptr!=NULL)
     {
         printf("%d\n",ptr->data);
         ptr=ptr->next;}
}

case 2:
{int pos;
struct node *pt1,*pt2;
pt1=head;
pt2=head->next;
printf("enter the position at which the item has to be deleted\n");
scanf("%d",&pos);
for(int i=1;i<pos-1;i++)
{
    pt1=pt1->next;
    pt2=pt2->next;
}
pt1->next=pt2->next;
free(pt2);

ptr=head;
printf("  linked list after deleting ith item is \n");
     while(ptr!=NULL)
     {
         printf("%d\n",ptr->data);
         ptr=ptr->next;
     }
     }

case 3:
 {int val;
     struct node *pt1,*pt2;
pt1=head;
pt2=head->next;
printf("enter value to be deleted\n");
  scanf("%d",&val);
  while(pt1->data!=val)
  {
     pt2=pt2->next;
      pt1=pt1->next;
      break;
  }
  pt1->next=pt2->next;
  printf("linked list after deleting the value is\n");
  struct node *ptr=head;
  while(ptr!=NULL)
     {
         printf("%d\n",ptr->data);
         ptr=ptr->next;
     }

 }

}
}
