#include<stdio.h>
int toggle_n_bits_pos(int num,int n,int pos)
{
    return num ^ (((1<<n)-1)<<(pos-n+1));
}
int main()
{
    int num,n,pos;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the Number of Bit :");
    scanf("%d",&n);
    printf("Enter the pos : ");
    scanf("%d",&pos);

    int result = toggle_n_bits_pos(num,n,pos);
    printf("After toggling nth Bit the Number is %d\n",result);
}