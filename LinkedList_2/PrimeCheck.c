#include <stdio.h>
#include <stdlib.h>
void create(int);
void print();

typedef struct Node
{
    int data;
    struct Node *link;
} N;

void prime(N *);

N *start = NULL; // Global Variable.

void create(int n1) // Function for node creation in Linked List.
{
    N *ptr = NULL, *ptr2 = NULL;
    ptr = malloc(sizeof(N));
    ptr->data = n1;
    ptr->link = NULL;

    if (start == NULL)
    {
        start = ptr;
    }

    else
    {
        ptr2 = start;
        while (ptr2->link != NULL)
        {
            ptr2 = ptr2->link;
        }
        ptr2->link = ptr;
    }
    fflush(stdin);
}

void print() // Function for printing the Linked List
{
    N *ptr2 = NULL;
    ptr2 = start;
    printf("The Linked List Is:-\n");
    while (ptr2->link != NULL)
    {
        printf("%d -> ", ptr2->data);
        ptr2 = ptr2->link;
    }
    printf("%d", ptr2->data);
    fflush(stdin);
}

void prime(N *p1)
{
    N *ptr3 = NULL;
    ptr3 = p1;
    printf("\nThe prime & non Prime Numbers are:-");
    while (ptr3->link != NULL)
    {
        if (ptr3->data > 2)
        {
            int count = 0;
            for (int i = 2; i < (ptr3->data); i++)
            {
                if ((ptr3->data) % i == 0)
                {
                    printf("\nNot a Prime Number");
                    count++;
                    break;
                }
            }
            if (count == 0)
            {
                printf("\nIt's a Prime Number");
            }
        }
        else if (ptr3->data == 2)
        {
            printf("\nThe Number is Prime");
        }
        ptr3 = ptr3->link;
    }
    if (ptr3->data > 2)
    {
        int count = 0;
        for (int i = 2; i < (ptr3->data); i++)
        {
            if ((ptr3->data) % i == 0)
            {
                printf("\nNot a Prime Number");
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("\nIt's a Prime Number");
        }
    }
    else if (ptr3->data == 2)
    {
        printf("\nThe Number is Prime");
    }
    free(ptr3);
}

int main()
{
    int value;
    char choice;
    while (1)
    {
        printf("Do you want a Node:-\n");
        scanf("%c", &choice);
        if (choice == 'y' || choice == 'Y')
        {
            printf("Enter the value of the node:-\n");
            scanf("%d", &value);
            create(value);
        }
        else
        {
            break;
        }
    }
    N *p = start;
    print();
    prime(p);
    return 0;
}