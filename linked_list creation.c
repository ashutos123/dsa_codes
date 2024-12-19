/*#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while(ptr!=NULL)
    {

        printf("elements are as :%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    ///as memory has been dynamically allocated so it is in heap not in stack
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));

    ///linking first and second nodes
    head->data=7;
    head->next=second;

    ///link second and third nodes}
    second->data=11;
    second->next=third;

    ///TERMINATING THE LIST by pointing to NULL

    third->data=45;
    third->next=fourth;

    fourth->data=32;
    fourth->next=NULL;

    traversal(head);
    return 0;
}*/


///new node insertion in linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next
    };

void traversal(struct node *ptr)
{
    while(ptr!=NULL)
    {

        printf("elements are as :%d\n",ptr->data);
        ptr=ptr->next;
    }
}
/// case 1 :inserting at first position
struct node *insertatfirst(struct node *head,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next= head;
    ptr->data=data;
    return ptr;
};

/// case 2:inserting in between
struct node *insertatindex(struct node *head,int data,int index)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;

    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
};
///case 3 :inserting at the end
struct node *insertatend(struct node *head,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));

    ptr->data=data;
    struct node *p=head;
    while(p->next!=NULL)
        p=p->next;
    p->next=ptr;
    ptr->next=NULL;
    return head;


};

///case 4 :inserting after a given node
struct node *insertafternode(struct node *head,struct node *prevnode,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));

    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
};

/// node deletion
///case 1 :deleting first element
struct node *deletefirst(struct node *head)
{
    struct node *ptr=head;
    head= head->next;
    free(ptr);
    return head;
};

/// case 2 :deleting at given index
   struct node *deleteatindex(struct node *head,int index)
{
    struct node *p=head;
    struct node *q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
};

///case 3:deleting at last
struct node *deleteatlast(struct node *head)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL)
       {
         p=p->next;
        q=q->next;
       }
       p->next=NULL;
       free(q);
    return head;

};
///case 4:deleting node with a given value
struct node *deleteatgivenvalue(struct node *head,int value)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->data!=value && q->next!=NULL)
       {
         p=p->next;
        q=q->next;
       }
       if(q->data==value)
       {
           p->next=q->next;
           free(q);
       }
    return head;
}
int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    ///as memory has been dynamically allocated so it is in heap not in stack
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    fifth=(struct node *)malloc(sizeof(struct node));

    ///linking first and second nodes
    head->data=7;
    head->next=second;

    ///link second and third nodes}
    second->data=11;
    second->next=third;

    ///TERMINATING THE LIST by pointing to NULL

    third->data=45;
    third->next=fourth;

    fourth->data=32;
    fourth->next=fifth;

    fifth->data=55;
    fifth->next=NULL;

    printf("linked list before insertion \n");
    traversal(head);
    //head=insertatfirst(head,67);
    // head=insertatindex(head,48,3);
    //  head=insertatend(head,21);
    //head=insertafternode(head,second,90);
   // printf(" \nlinked list after  insertion");
   //head=deletefirst(head);
   //head=deleteatindex(head,3);
   //head=deleteatlast(head);
   head=deleteatgivenvalue(head,32);
   printf("\nlinked list after deletion ");
    traversal(head);


    return 0;
}



















































