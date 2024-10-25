// Description : 

// You have to read a character and  check it is Upper case,  Lower case or Digit by using switch case.

// Sample Execution : 

// Test case 1 : 

// Enter the character : A

// The character is an Upper Case.

// Test case 2 :

// Enter the character : 5

// The character is an Digit.

// Test case 3 :

// Enter the character : !

// The character not an alphabet or digit.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    int check=ch;
    switch(check)
    {
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        printf("The character is an Lower Case.\n");
        break;
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        printf("The character is an Upper Case.\n");
        break;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case'0':
        printf("The character is an Digit.\n");
        break;
        default:
        printf("The character not an alphabet or digit");
    }
}
