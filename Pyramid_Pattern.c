#include <stdio.h>
int main()
{
    int num, i, j;
    printf("Enter the Number : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        /* code */
        for (j = 1; j <= num - i; j++)
        {
            /* code */
            printf(" ");
        }
        for (j = 1; j <= (2*i)-1; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
    }

    return 0;
}