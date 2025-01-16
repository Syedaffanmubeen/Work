/*Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
The day is Tuesday*/
/* code */

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the value of 'n' :");
    scanf("%d", &n);
    if (n > 0 && n <= 365)
    {
        printf("Choose the First Day\n 1.Sunday\n 2.Monday\n 3.Wednesday\n 4.Thursday\n 5.Friday\n 6.Saturday\n Enter the option to select first day : ");
        scanf("%i", &i);
        if (i <= 7 && i > 0)
        {
            int day = (n + i - 1) % 7;
            switch (day)
            {
            case 0:
                printf("The Day is Saturday\n");
                break;
            case 1:
                printf("The Day is Sunday\n");
                break;
            case 2:
                printf("The Day is Monday\n");
                break;
            case 3:
                printf("The Day is Tuesday\n");
                break;
            case 4:
                printf("The Day is Wednnesday\n");
                break;
            case 5:
                printf("The Day is Thursday\n");
                break;
            case 6:
                printf("The Day is Friday\n");
                break;
            default:
                break;
            }
        }
        else{
            printf("Error : The First should be >0 and <=7\n");
        }
    }
    else
    {
        printf("Error : Value of n should be >0 and <=365\n");
    }
    
}