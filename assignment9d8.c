//creating  binary tree
/*#include<stdio.h>
#inbclude<stdlib.h>
typedef struct node{
int data;
struct node *l,*r,*root} tree;
 struct node *create()
 int main()
{
struct node *root;
 int n;
 printf ("enter tno. of elements you want in tree\n");
 scanf("%d",&n);
 for(int i=0;i<=n;i++)
 {
     root=create();
 }
 }

 struct node*create()
 {
     struct node*newnode;
     newnode=(struct node*)malloc(sieof(struct node));
     int x;
     if(x==-1)
     {
         return 0;
     }

     printf("enter the value of left child of %d (press -1 for no left child)",x);
     printf("enter the value of right child of %d (press -1 for no right child)",x);

       newnode->right=create();
       return newnode;
 }

*/

  #include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	struct node *lchild;
	int data;
	struct node *rchild;
};
int n,i;
struct node* getnode()
{
	struct node *ptr=malloc(sizeof(struct node));
	printf("Enter the data value of the node\n");
	int d;
	scanf("%d",&d);
	ptr->data=d;
	int c;
	printf("Does this node have a left child 1/0\n");
	scanf("%d",&c);
	if(c==1)
	{
		ptr->lchild=getnode();
	}
	else{
		ptr->lchild=NULL;
	}
	printf("Does this node have a right child 1/0\n");
		scanf("%d",&c);
	if(c==1)
	ptr->rchild=getnode();
	else
	ptr->rchild=NULL;
	return ptr;
}
struct node* print(struct node *node,char c)
{
	if(node!=NULL){
	if(c=='L')
	printf("left node %d\n",node->data);
	else if(c=='R')
	printf("                                  Right node %d\n",node->data);
	else if(c=='K')
	printf("                 Root node %d\n",node->data);
	print(node->lchild,'L');
	print(node->rchild,'R');}
	return node;
}
void main(){
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n-1;++i){
        struct node* root=malloc(sizeof(struct node));
        root=getnode();
        print(root,'K');
    }
}




/*struct node *searchnode(struct node *r,int d)
{
	if(r->data!=d)
	{
		if(r->lchild!=NULL)
		searchnode(r->lchild,d);
		else
		return NULL;
		if(r->rchild!=NULL)
		searchnode(r->rchild,d);
		else
		return NULL;
	}
	else return r;
}*/
/*void insert(struct node *root)
{
	int nd,d;
	printf("Enter the data of the node after which the data is to be inserted\n");
	scanf("%d",&nd);
	printf("Enter the data of the node to be inserted\n");
	scanf("%d",&d);
	struct node *temp=malloc(sizeof(struct node));
	temp->data=d;
	temp->lchild=NULL;
	temp->rchild=NULL;
	struct node *ptr=malloc(sizeof(struct node));
	ptr=searchnode(root,nd);
	if(ptr!=NULL)
	{
		if(ptr->lchild==NULL||ptr->rchild==NULL)
		{
			int c;
			printf("Enter 1 for inserting in left child 2 for in right child\n,Enter your choice\n");
			scanf("%d",&c);
			if(c==1)
			{
				if(ptr->lchild==NULL)
				ptr->lchild=temp;
				else{
				("Insertion is not possible at left node\n");
				exit(1);}
			}
			if(c==2)
			{
				if(ptr->rchild==NULL)
				ptr->rchild=temp;
				else{
				("Insertion is not possible at right node\n");
				exit(1);}
			}
			else
			printf("Trying to insert at the middle node\n");
		}
	}
}*/











