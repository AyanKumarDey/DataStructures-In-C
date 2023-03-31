//Stack Code.
#include <stdio.h>
int top=-1;
int arr[5];
void push(int);
void pop();
void display();
void push(int value)
{
   if(top==4)
   {
     printf("Stack Overflow");
   }
   else
   {
      top++;
      arr[top]=value;
   }
}
void pop()
{
   if(top==-1)
   {
      printf("Stack Underflow");
   }
   else
   {
      printf("The popped element is:%d",arr[top]);
      top--;
   }
}
int main()
{
   int data;
   int choice;
   printf("Enter the choice:");
   scanf("%d",&choice);
   while(1)
   {
      switch(choice)
      {
         case 1:
         printf("Enter the elements:");
         scanf("%d",&data);
         push(data);
         break;
         case 2:
         pop();
         break;
         default:
         printf("Invalid Output");
      }
      printf("\nEnter the choice:");
      scanf("%d",&choice);
   }
   return 0;
}
