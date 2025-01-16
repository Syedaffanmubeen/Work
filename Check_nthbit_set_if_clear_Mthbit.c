#include<stdio.h>
/*
Description:WAP to check N th bit is set or not, If yes, clear the M th bit
Sample Input:
Enter the number:19
Enter 'N':1
Enter 'M':4
Sample Output: Updated value of num is 3
*/
int main()

{
    int num,N,M;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter 'N':");
    scanf("%d",&N);
    printf("Enter 'M': ");
    scanf("%d",&M);
    if((num&(1<<N))!=0)
    {
        num=num&~(1<<M);
    }
    printf("Updated value of num is %d\n",num);
    return 0;
}