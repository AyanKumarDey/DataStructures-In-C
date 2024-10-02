//Singly Linked List(Deletion).
#include<stdio.h>//Standard input output library;
#include<stdlib.h>
typedef struct s1
{
   int info;
   struct s1 *link;
}Node;//User defined data type named Node.
Node *start=NULL;
void add_node(int);
void delete_beg();
void delete_end();
void delete_anypos(int);
void display();
void add_node(int value)//Function for node creation of Linked List.
{
    Node *newptr=NULL,*ptr=NULL;
    newptr=(Node*)malloc(sizeof(Node));//Node named newptr is created of node type.
    newptr->info=value;
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
void delete_beg()//Function for deleting the first node of a linked list.
{
   Node *ptr=start;
   ptr=ptr->link;
   start->link=NULL;
   start=ptr;
}
void delete_end()//Function for deleting the last node of a linked list.
{
    Node *ptr=start,*temp=NULL;
    while(ptr->link!=NULL)
    {
        temp=ptr;
        ptr=ptr->link;
    }
    if(ptr->link==NULL)
    {
       temp->link=NULL;
    }
}
void delete_anypos(int pos)//Function for deleting any node from any position of a linked list.
{
    Node *ptr=start,*temp=NULL;
    int steps=1;
    while(steps<pos)
    {
        temp=ptr;
        ptr=ptr->link;
        steps++;
    }
    if(pos==1)
    {
       ptr=ptr->link;
       start->link=NULL;
       start=ptr;
    }
    else
    {
        temp->link=ptr->link;
        ptr=NULL;
    }
}
void display()//Function for displaying the Linked List.
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
int main()//Main function for executing the given operations present in different functions.
{
    int data,pos;
    char choice;
    while(1)
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
    printf("\nThe new linked list is:\n");
    delete_beg();
    display();
    printf("\nThe new linked list is:\n");
    delete_end();
    display();
    printf("\nEnter the position:");
    scanf("%d",&pos);
    delete_anypos(pos);
    printf("The new arranged linked list is:\n");
    display();
    return 0;
}
