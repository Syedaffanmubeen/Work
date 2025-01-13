#include<stdio.h>
int replacenbits(int num,int n,int val)
{
    return val | (num &(~((1<<n)-1)));
}
int main()
{
    int num,n,val;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the Number of Bits :");
    scanf("%d",&n);
    printf("Enter the value to be replaced : ");
    scanf("%d",&val);

    int result = replacenbits(num,n,val);
    printf("After replacing Bits the Number is %d\n",result);
}