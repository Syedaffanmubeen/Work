#include<stdio.h>
int toggle_nth_bits(int num,int n)
{
    return num ^ (1<<n);
}
int main()
{
    int num,n;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the Number of Bit :");
    scanf("%d",&n);

    int result = toggle_nth_bits(num,n);
    printf("After toggling nth Bit the Number is %d\n",result);
}