#include <stdio.h>
int print_bits(int num, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int ret = (num & (1 << i)) >> i;
        printf("%d ", ret);
    }
    printf("\n");
}
int main()
{
    int num, n;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("Enter number of bits:");
    scanf("%d", &n);
    printf("Binary form of %d: ", num);
    print_bits(num, n);
    // printf("%d\n",print_bits);
}