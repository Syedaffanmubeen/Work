/*Test Case :
Enter the number: 5
1   5
 2 4
  3
 2 4
1   5*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            /* code */
            if(j==i)
            {
                printf("%d",i);
            }
            else if(i+j == n+1)
            {
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
    
}