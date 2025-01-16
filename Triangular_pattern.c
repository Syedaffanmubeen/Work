// If n = 5, then,
// 1 2 3 4 5
// 6 _ _ 7
// 8 _ 9
// 10 11
// 12

#include<stdio.h>
int main()
{
    int n,num=1;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n ; i++)    
    {
        /* code */
        for (int j = 1; j <= n; j++)       
        {
            /* code */
            if (j==1 || i == 1 || j==n-i+1)
            {
                /* code */
                printf("%d",num++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}