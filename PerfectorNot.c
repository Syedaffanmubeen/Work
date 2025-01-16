#include <stdio.h>
int main()
{
    int n, temp, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    temp = n / 2;
    for (int i = 1; i <= temp; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("yes, entered number is a Perfect Number\n");
    }
    else
    {
        printf("No, entered number is not a perfect number\n");
    }
    return 0;
}