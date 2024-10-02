//Singly Linked List(Insertion).
#include <stdio.h>
#include <stdlib.h>
typedef struct s1
{
    int info;
    struct s1 *link;
}Node;
Node *start=NULL;
void add_node(int);
void add_beg(int);
void add_end(int);
void add_anypos(int,int);
void display();
void add_node(int data)//Function for linked creation.
{
    Node *newptr=NULL,*ptr;
    newptr=(Node*)malloc(sizeof(Node));//Node named newptr is created of node type.
    newptr->info=data;
    newptr->link=NULL;
    if(start==NULL)
    {
        start=newptr;
    }
    else
    {
        ptr=start;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=newptr;
    }
}
void add_beg(int data)//Function of adding a node at the front of a linked list created.
{
    Node *newptr=NULL;
    newptr=(Node*)malloc(sizeof(Node));
    newptr->info=data;
    newptr->link=NULL;
    if(start!=NULL)
    {
        newptr->link=start;
        start=newptr;
    }
}
void add_end(int data)//Function for adding a node at the end of the linked list created.
{
    Node *newptr=NULL,*ptr=start;
    newptr=(Node*)malloc(sizeof(Node));
    newptr->info=data;
    newptr->link=NULL;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    if(ptr->link==NULL)
    {
        ptr->link=newptr;
    }
}
void add_anypos(int data,int pos)//Function for adding a node at any position of a linked list created.
{
   Node *newptr=NULL,*ptr=start;
   int steps=1;
   newptr=(Node*)malloc(sizeof(Node));
   newptr->info=data;
   newptr->link=NULL;
   while(steps<pos-1)
   {
     ptr=ptr->link;
   }
   if(pos==1)
   {
      newptr->link=start;
      start=newptr;
   }
   else
   {
      newptr->link=ptr->link;
      ptr->link=newptr;
   }
}
void display()//Function for displaying the linked lists.
{
    Node *ptr;
    ptr=start;
    while(ptr)
    {
        printf("%d -> ",ptr->info);
        ptr=ptr->link;
    }
    printf("NULL");
}
int main()//Main Function for executing and calling others functions to get the desired output.
{
    int value,pos;
    char choice;
  while(1)
  {
    printf("Do you want a node(y/n)\n");
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
    {
        printf("Enter the info:\n");
        scanf("%d",&value);
        add_node(value);
        fflush(stdin);
    }
    else
    {
        break;
    }
  }
  printf("The linked list is:\n");
  display();
  printf("\nEnter the info:");
  scanf("%d",&value);
  add_beg(value);
  printf("The new linked list is:");
  display();
  printf("\nEnter the info:");
  scanf("%d",&value);
  add_end(value);
  printf("The new linked list is:");
  display();
  printf("\nEnter the position:");
  scanf("%d",&pos);
  printf("Enter the info:");
  scanf("%d",&value);
  add_anypos(value,pos);
  printf("The new arranged linked list is:");
  display();
    return 0;
}
