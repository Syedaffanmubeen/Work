#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    if (n<0)
    {
        /* code */
        printf("ERROR : Invalid Number\n");
    }
    else
    {
        int current,next,sum;
        current=0;
        next=1;
        while (current<=n)
        {
            /* code */
            printf("%d ",current);
            sum = current + next;
            current = next;
            next = sum;
        }
        printf("\n");
        
    }
    return 0;
}