//Doubly Linked List.
#include<stdio.h>
#include<stdlib.h>
typedef struct s1
{
  int info;
  struct s1 *lptr,*rptr;
}Node;
Node *start=NULL;
void add_node(int);
void add_beg(int);
void add_end(int);
void add_anypos(int,int);
void delete_end();
void delete_beg();
void delete_anypos(int);
void display();
void add_node(int value)//Function for linked list creation.
{
    Node *newptr=NULL,*ptr=NULL;
    newptr=(Node*)malloc(sizeof(Node));//Node creation named newptr of Node type.
    newptr->lptr=NULL;
    newptr->info=value;
    newptr->rptr=NULL;
    if(start==NULL)
    {
        start=newptr;
    }
    else
    {
        ptr=start;
        while(ptr->rptr!=NULL)
        {
            newptr->lptr=ptr;
            ptr=ptr->rptr;
        }
        ptr->rptr=newptr;
    }
}
void add_beg(int value)//Function of adding a new node in front of a created linked list.
{
    Node *newptr=NULL,*ptr=start;
    newptr=(Node*)malloc(sizeof(Node));
    newptr->lptr=NULL;
    newptr->info=value;
    newptr->rptr=NULL;
    newptr->rptr=start;
    start->lptr=newptr;
    start=newptr;
}
void add_end(int value)//Function for adding a node at the end of the linked list.
{
    Node *newptr=NULL,*ptr=start;
    newptr=(Node*)malloc(sizeof(Node));
    newptr->lptr=NULL;
    newptr->info=value;
    newptr->rptr=NULL;
    while(ptr->rptr!=NULL)
    {
       ptr=ptr->rptr;
    }
    if(ptr->rptr==NULL)
    {
        ptr->rptr=newptr;
        newptr->lptr=ptr;
    }
}
void add_anypos(int value,int pos)//Function of adding a new node in any position of a created linked list.
{
    Node *newptr,*ptr=start;
    int steps=1;
    newptr=(Node*)malloc(sizeof(Node));
    newptr->lptr=NULL;
    newptr->info=value;
    newptr->rptr=NULL;
    while(steps<pos-1)
    {
        ptr=ptr->rptr;
        steps++;
    }
    if(pos==1)
    {
       newptr->rptr=start;
       start->lptr=newptr;
       start=newptr; 
    }
    else
    {
        newptr->rptr=ptr->rptr;
        ptr->rptr=newptr;
        newptr->lptr=ptr;
    }
}
void delete_end()//Function of deleting the last node of the created linked list.
{
   Node *ptr=start,*temp=NULL;
   while(ptr->rptr!=NULL)
   {
     temp=ptr;
     ptr=ptr->rptr;
   }
   if(ptr->rptr==NULL)
   {
     temp->rptr=NULL;
   }
}
void delete_beg()//Function of deleting the first node of the created the linked list.
{
    Node *ptr=start;
    ptr=ptr->rptr;
    start->rptr=NULL;
    start=ptr;
}
void delete_anypos(int pos)//Function of deleting any node of the created linked list.
{
    Node *ptr=start,*temp=NULL;
    int steps=1;
    while(steps<pos)
    {
        temp=ptr;
        ptr=ptr->rptr;
        steps++;
    }
    if(pos==1)
    {
      ptr=ptr->rptr;
      start->rptr=NULL;
      ptr->lptr=NULL;
      start=ptr; 
    }
    else
    {
      temp->rptr=ptr->rptr;
      ptr=NULL;
    }
}
void display()//Function for displaying the nodes.
{
    Node *ptr;
    ptr=start;
    while(ptr)
    {
        printf("%d -> ",ptr->info);
        ptr=ptr->rptr;
    }
    printf("NULL");
}
int main()
{   
    int data,pos;
    char choice;
    while (1)
    {
        printf("Do you want a node:\n");
        scanf("%c",&choice);
        if(choice=='y'||choice=='Y')
        {
            printf("Enter the info:\n");
            scanf("%d",&data);
            add_node(data);
            fflush(stdin);
        }
        else
        {
            break;
        }
    }
    printf("The linked list is:\n");
    display();
    printf("\nEnter the info:\n");
    scanf("%d",&data);
    add_beg(data);
    printf("The new linked list is:\n");
    display();
    printf("\nEnter the info:\n");
    scanf("%d",&data);
    add_end(data);
    printf("The new linked list is:\n");
    display();
    printf("\nEnter the position:\n");
    scanf("%d",&pos);
    printf("Enter the info:\n");
    scanf("%d",&data);
    add_anypos(data,pos);
    printf("The new linked list is:\n");
    display();
    printf("\nThe arranged linked list is:\n");
    delete_end(pos);
    display();
    printf("\nThe new arranged linked list is:\n");
    delete_beg();
    display();
    printf("\nEnter the position:\n");
    scanf("%d",&pos);
    delete_anypos(pos);
    printf("The new linked list:\n");
    display();
    return 0;
}
