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
    ptr=head;
     printf("items of linked list are \n");
     while(ptr!=NULL)
     {
         printf("%d\n",ptr->data);
         ptr=ptr->next;
     }

///inserting at first position
   /* struct node *ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1->next=head;
     printf("enter the item  to be inserted\n");
     scanf("%d",&(ptr1->data));

ptr=ptr1;
     printf("items of linked list are \n");
     while(ptr!=NULL)
     {
         printf("%d\n",ptr->data);
         ptr=ptr->next;
     }*/
   ///inserting at last
   /*ptr=head;
   while(ptr!=NULL)
   {
       ptr=ptr->next;
      break;
   }
struct node *lastnode=(struct node*)malloc(sizeof(struct node));
printf("enter the last  item to be inserted\n");
scanf("%d",&(lastnode->data));
lastnode->next=NULL;
ptr->next=lastnode;

ptr=head;
     printf(" new items of linked list are \n");
     while(ptr!=NULL)
     {
         printf("%d\n",ptr->data);
         ptr=ptr->next;
     }*/






 ///inserting new node at ith position
 /*int pos,item;
 printf("enter the position at which item has to inserted \n");
 scanf("%d",&pos);
 printf("enter the element to be inserted\n");
 struct node *newnode=(struct node*)malloc(sizeof(struct node));
 scanf("%d",&(newnode->data));
    struct node *ptr2=(struct node*)malloc(sizeof(struct node));
   ptr=head;
    ptr2=head->next;
     int i=1;
     while(i!=pos-1)
     {
        ptr=ptr->next;
        ptr2=ptr2->next;
        i++;
     break;}
     ptr->next=newnode;
     newnode->next=ptr2;

    ptr=head;
     printf("items of linked list are \n");
     while(ptr!=NULL)
     {
         printf("%d\n",ptr->data);
         ptr=ptr->next;
     }
     */

     ///sorting a linked list
/*int temp;
ptr=head;
struct node *ptr3;

while(ptr!=NULL)
{
    ptr3=ptr->next;
    while(ptr3!=NULL)
    {if((ptr->data)>(ptr3->data))
     {temp=ptr->data;
    ptr->data=ptr3->data;
    ptr3->data=temp;}
    ptr3=ptr3->next;

    }
    ptr=ptr->next;


}


 ptr=head;
     printf(" sorted items of linked list are \n");
     while(ptr!=NULL)
     {
         printf("%d\n",ptr->data);
         ptr=ptr->next;
     }*/

 ///reversing a linked list

/*ptr=head;
struct node *prev=NULL;
struct node *temp;
while(ptr!=NULL)
{

    temp=ptr->next;
    ptr->next=prev;
    prev=ptr;
    ptr=temp;

}
head=prev;


struct node *pt=head;
printf("the reverse linked list is:\n");
while(pt!=NULL)
{
    printf("%d\n",pt->data);
    pt=pt->next;

}*/

///deleting first element in linked list
/*ptr=head;
head=ptr->next;
free(ptr);
ptr=head;
printf("  linked list after deleting first item is \n");
     while(ptr!=NULL)
     {
         printf("%d\n",ptr->data);
         ptr=ptr->next;
     }*/

///deleting item at given postion
int pos;
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












