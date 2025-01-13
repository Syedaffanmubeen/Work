#include<stdio.h>                                                /*including stdio.h library function*/
int main()
{
    int num;                                                     /*declaring a variable num*/
    printf("Enter a number : ");                                 /*Giving the Promt to user using Printf*/
    scanf("%d",&num);                                            /*Reading the value from user using scanf*/
    if(num == 0)                                                 /*Condition to check whether the num is zero or not*/
    {
        printf("%d is neither odd or even\n",num);               /*if the condition true print a statement determining its true using printf*/
    }
    else if(num > 0)                                             /*if above if is false check this else if to deternime if num is greater than 0*/
    {
        if((num%2) == 0)                                        /*check if num is even by % 2*/
        {
            printf("%d is possitive even number\n",num);        /*if num is % 2 then printing it is even positive number*/
        }
        else{
            printf("%d is possitive odd number\n",num);        /*if num is not % 2 the printing it is odd positive number*/
        }
    }
    else                                                      /*this else states that the given num is less than 0 i.e., negative number*/
    {
        if((num%2) == 0)                                      /*if num % 2 then it is even number*/
        {
            printf("%d is negative even number\n",num);        /*if num is % 2 then printing it is even negative number*/
        }
        else{
            printf("%d is negative odd number\n",num);        /*if num is % 2 then printing it is odd negative number*/
        }
    }
}