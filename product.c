#include<stdio.h>
int product(int *a,int *b)
{
    int product = *a * *b;
    return product;
}

int main()
{
    int num1,num2;
    printf("Enter the numbers:");
    scanf("%d %i", &num1,&num2);

    int result = product(&num1,&num2);
    printf("Product of %d and %d is %i\n",num1,num2,result);
}