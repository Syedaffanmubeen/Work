#include<stdio.h>
int getnbitsfrompos(int num,int n,int pos)
{
    return (num>>(n-1)) & ((1<<n)-1);
}
int main()
{
    int num,n,pos;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the Number of Bits :");
    scanf("%d",&n);
    printf("Enter the position : ");
    scanf("%d",&pos);

    int result = getnbitsfrompos(num,n,pos);
    printf("After geting Bits %d from position %d the Number is %d\n",n,pos,result);
}