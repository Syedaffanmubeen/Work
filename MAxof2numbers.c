// Test case 1 : 
// Enter the num1 : 10
// Enter the num2 : 20 
// Max of two numbers is 20

// Test case 2 :
// Enter the num1 : 95
// Enter the num2 : 25 
// Max of two numbers is 95


#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the num1 : ");
    scanf("%d",&num1);
    printf("Enter the num2 : ");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("Max of two numbers is %d\n",num1);
    }
    else
    {
        printf("Max of two numbers is %d\n",num2);
    }
}