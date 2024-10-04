#include <stdio.h>
#include <stdlib.h>
void createNode(int); // Function for creating a node in Linked List.
void printNode();
typedef struct Node
{
    int data;
    struct Node *link;
}N;

N *Start = NULL; // Global Variable.

void createNode(int value)
{
    N *ptr = NULL, *ptr1 = NULL;
    ptr = malloc(sizeof(N));
    ptr->data = value;
    ptr->link = NULL;
    if(Start == NULL)
    {
        Start = ptr;
    }
    else
    {
        ptr1=Start;
        while(ptr1->link != NULL)
        {
            ptr1 = ptr1->link;
        }
        ptr1->link=ptr;
    }
    fflush(stdin);
}

void printNode()
{
    N *ptr2=NULL;
    ptr2 = Start;
    printf("The Singly Linked List Is\n");
    while(ptr2->link != NULL)
    {
        printf("%d --> ",ptr2->data);
        ptr2 = ptr2->link;
    }
    printf("%d ",ptr2->data);
    fflush(stdin);
}

int main()
{
    int value;
    char choice;
    while (1)
    {
        printf("Do you want a node:-\n");
        scanf("%c",&choice);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter the value of the node:-\n");
            scanf("%d", &value);
            createNode(value);
        }
        else
        {
            break;
        }
    }
    printNode();
    return 0;
}