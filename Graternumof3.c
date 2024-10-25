// Description : 

// You should read 3 integers from user and find the maximum of three numbers.

// Sample Execution : 

// Test case 1 : 

// Enter the three numbers : 10 20 30
// Max of three number is 30

// Test case 2 :

// Enter the three numbers : 90 20 40
// Max of three number is 90

#include<stdio.h>
int main()
{
    int num1,num2,num3,max;
    printf("Enter the three numbers :\n");
    scanf("%d %i %d",&num1,&num2,&num3);
    if(num1 > num2 && num1 > num3)
    {
        max = num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        max = num2;
    }
    else 
    {
        max = num3;
    }
    printf("Max of three number is %d\n",max);
}