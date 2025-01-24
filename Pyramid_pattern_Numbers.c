// If n = 5, then,
// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5

#include<stdio.h>
int main()
{
    int n,temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        temp=(n-i+1);
        for (int j = 1; j <= n; j++)
        {
            /* code */
            if (i>=j)
            {
                /* code */
                printf("%d ",temp++);
            }
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        /* code */
        temp = (i+1);
        for (int j = 1; j < n; j++)
        {
            /* code */
            if (i<=j)
            {
                /* code */
                printf("%d ",temp++);
            }
            
        }
        printf("\n");
    }
    
    
}
