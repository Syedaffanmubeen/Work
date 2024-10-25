// Description : 

// you should read three intergers from user and find the middle number 

// Test case 1 : 

// Enter the Three numbers : 10 20 30
// The middle number is 20

// Test case 2 :

// Enter the Three numbers : 43 10 25
// The middle number is 25

#include<stdio.h>
int main()
{
    int n1,n2,n3,middle;
    printf("Enter the three numbers\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if((n1<n2 && n1>n3) || (n1>n2 && n1<n3))
    {
        middle = n1;
    }
    else if((n2>n1 && n2<n3) || (n2<n1 && n2>n3))
    {
        middle = n2;
    }
    else
    {
        middle = n3;
    }
    printf("The middle number is %d\n",middle);
    return 0;
}