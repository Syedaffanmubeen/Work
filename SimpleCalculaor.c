// Description : 

// You have to read 2 interger the name as num1 and num2 and read 1 character name as operator and write a code to perform arithmetic operations( +, -, x, /).

// Sample Execution : 

// Test case 1 : 

// Enter the Two numbers : 10 20
// Enter the operator : +
// The Result is : 30

// Test case 2 :

// Enter the Two numbers : 50 30
// Enter the operator : -
// The Result is : 20

// Test case 3 :
// Enter the Two numbers : 10 20
// Enter the operator : %
// Invalid Operator

#include<stdio.h>
int main()
{
    int num1,num2,res;
    printf("Enter the Two numbers : ");
    scanf("%i %i",&num1,&num2);
    getchar();
    char op;
    printf("Enter the operator : ");
    scanf("%c",&op);
    
    switch(op)
    {
        case '+':
        res = num1 + num2;
        printf("The Result is : %i\n",res);
        break;
        case '-':
        res = num1 - num2;
        printf("The Result is : %i\n",res);
        break;
        case 'x':
        res = num1 * num2;
        printf("The Result is : %i\n",res);
        break;
        case '/':
        res = num1 / num2;
        printf("The Result is : %i\n",res);
        break;
        default:
        printf("Invalid Operator\n");
    }
}