// You have to read a interger value from user, it should be less than 100.

// *) if percentage is greater than 90 and less than or equal to 100 - 'A'

// *) if percentage is greater than 70 and less than 91 - 'B'

// *) if percentage is greater than 50 and less than 71 - 'C'

// *) if percentage is less than or equal to 50 - 'F'

// Sample Execution : 

// Test case 1 : 
// Enter the percentage : 95
// The Grade is A

// Test case 2 :
// Enter the percentage : 115
// Error : Please enter the percentage less than or equal to 100.

#include<stdio.h>
int main()
{
    int operation;
    printf("Enter the persentage :");
    scanf("%d",&operation);
    switch (operation)
    {
        case 0 ... 50:
        printf("The Grade is F\n");
        break;
        case 51 ... 70:
        printf("The Grade is C\n");
        break;
        case 71 ... 90:
        printf("The Grade is B\n");
        break;
        case 91 ... 100:
        printf("The Grade is A\n");
        break;
        default:
        printf("Error : Please enter the percentage less than or equal to 100");
    }
    return 0;
}