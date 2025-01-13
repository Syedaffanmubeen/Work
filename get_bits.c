#include<stdio.h>
int getnbits(int num,int n)
{
    return num & ((1<<n)-1);
}
int main()
{
    int num,n;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the Number of Bits :");
    scanf("%d",&n);

    int result = getnbits(num,n);
    printf("After Getting Bits the Number is %d\n",result);
}