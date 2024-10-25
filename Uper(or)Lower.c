// Description : 

// You have to read a characer and check it is  upper case, lower case, digit or none.of.above.

// Test case 1 : 

// Enter the character : A
// The character is Upper Case.

// Test case 2 :


// Enter the character : 5
// The character is Digit.

// Test case 3 :

// Enter the character : !
// The character not an alphabet or digit.

#include<stdio.h>
int main()
{
    char ch;
    //printf("Enter the character\n");
    scanf("%c",&ch);
    int check = ch;
    if(check >= 48 && check <= 57)
    {
        printf("The character is Digit.\n");
    }
    else if(check >= 65 && check <= 90)
    {
        printf("The character is Upper case.\n");
    }
    else if(check >=97 && check <=122)
    {
        printf("The character is Lower case.\n");
    }
    else
    {
        printf("The character is not an alphabet or digit.\n");
    }
}