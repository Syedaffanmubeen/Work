// Description
// You have to read 2 integers from user and multiply two numbers without using multiplication operator

// Sample Execution : 
// // 
// Test case 1 : 

// Enter the two numbers : 10 2
// The Result is 20

// Test case 2 :

// Enter the two numbers : 1 2
// The Result is 2

#include<stdio.h>
int multiply(int a,int b)
{
    int result = 0;
    for(int i=0;i<b;i++)
    {
        result = result + a;
    }
    return result;
}

int main()
{
    int num1,num2;
    printf("Enter the two numbers : ");
    scanf("%d %d",&num1,&num2);
    
    int result;
    if(num2 < 0)
    {
        result = -multiply(num1,-num2);
    }
    else
    {
        result = multiply(num1,num2); 
    }
    printf("The Result is %d\n",result);
    return 0;
}