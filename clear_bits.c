#include<stdio.h>
int clearnbits(int *num,int *n)
{
    return *num & (~((1<<*n)-1));
}
int main()
{
    int num,n;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the Number of Bits :");
    scanf("%d",&n);

    int result = clearnbits(&num,&n);
    printf("After clearing Bits the Number is %d\n",result);
}