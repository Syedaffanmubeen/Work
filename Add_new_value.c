#include<stdio.h>
int main()
{
    int size,new,temp;
    printf("Enter the size of an array :");
    scanf("%d",&size);
    int arr[size+1];
    printf("Enter %d elements of the array :",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the new element :");
    scanf("%d",&new);
    int new_size = size;
    arr[new_size]=new;
    for (int i = 0; i <= new_size-1; i++)
    {
        for (int j = 0; j <= new_size-i-1; i++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    for (int i = 0; i <= new_size; i++)
    {
        /* code */
        printf("%d",arr[i]);
    }
    printf("\n");
    
}