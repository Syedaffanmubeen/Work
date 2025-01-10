// Test case 1 : 

// Enter n : 4

//       *

//     * * *

//   * * * * *

// * * * * * * *
#include <stdio.h>    //including stdio.h header library to use I/O functions

int main() {
    int n;            //declaring a variable n
    printf("Enter n: ");    //Giving Promt to User    
    scanf("%d", &n);        //Formatted input from the user

    for (int i = 0; i < n; i++) {    //Outer loop for number of rows
        // Print leading spaces for centering
        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }

        // Print stars with spaces in between
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
