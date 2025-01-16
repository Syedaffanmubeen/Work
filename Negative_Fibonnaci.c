#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int current, next, res;
    current = 0;
    next = 1;
    if (n > 0)
    {
        printf("Error : Enter a negative number ");
    }
    else
    {
        while (current >= n)
        {
            /* code */
            printf("%d ", current);
            res = current - next;
            current = next;
            next = res;
        }
        printf("\n");
    }
    return 0;
}