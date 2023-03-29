#include<stdio.h>
int front=-1;
int rear=-1;
int arr[5];
void insert(int value)
{
    if(rear==-1)
    {
        rear=0;
    }
    if(rear==4)
    {
        printf("Overflow");
    }
    else
    {
        arr[rear]=value;
        printf("The inserted element is: %d ",arr[rear]);
        rear++;
    }
}
void delete()
{
    if(front==-1)
    {
        front=0;
    }
    if(front>rear)
    {
        printf("Underflow");
    }
    else
    {
        int value1;
        value1=arr[front];
        printf("The deleted element is : %d ",value1);
        front++;
    }
}
int main()
{
    int info;
    int choice;
    while(1)
    {
        printf("Enter the choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the info:\n");
            scanf("%d",&info);
            insert(info);
            fflush(stdin);
            break;
            case 2:
            delete();
            break;
            default:
            printf("Invalid Output");
        }
        printf("\n");
    }
    return 0;
}
