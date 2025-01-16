#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter a Number :");
    scanf("%d", &n);
    if (n > 0)
    {
        int arr[n];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 2; j * j < n; j++)
            {
                /* code */
                for (int k = 2; k * j < 2; k++)
                {
                    /* code */
                    sum = j * k;
                    arr[sum] = 0;
                }
            }
        }
        printf("The prime Number less than or equal to %d are\n", n);
        for (int i = 2; i < n; i++)
        {
            /* code */
            if (arr[i] > 0)
            {
                /* code */
                printf("%d", arr[i]);
                if (i < n)
                {
                    printf(",");
                }
            }
        }
    }
    else
    {
        printf("Enter a positive number\n");
    }
    return 0;
}