#include<stdio.h>
int bubble_sort(int arr[],int m)
{
    int i,j;
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int print_array(int arr[],int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int m;
    printf("Enter the size of the array:\n");
    scanf("%d",&m);
    int arr[m];
    int i;
    printf("Enter the elements in the array:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    printf("The array before sorting is:\n");
    for(i=0;i<m;i++)
    {
        printf("%d\t",arr[i]);
    }
    bubble_sort(arr,m);
    printf("\nThe sorted array is:\n");
    print_array(arr,m);
    return 0;
}
