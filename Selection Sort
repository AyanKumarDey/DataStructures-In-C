#include<stdio.h>
int swap(int *x ,int *y)
{
    int temp= *x;
    *x = *y;
    *y = temp;
}
int selection_sort(int arr[],int m)
{
    int i,j,min;
    for(i=0;i<m-1;i++)
    {
        min=i;
        for(j=i+1;j<m;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            if(min!=i)
            {
                swap(&arr[min],&arr[i]);
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
    int i;
    printf("Enter the elements in the array:\n");
    int arr[m];
    for(i=0;i<m;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    printf("The unsorted array is:\n");
    for(i=0;i<m;i++)
    {
        printf("%d\t",arr[i]);
    }
    selection_sort(arr,m);
    printf("\nThe sorted array is:\n");
    print_array(arr,m);
    return 0;
}
