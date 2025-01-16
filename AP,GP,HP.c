#include<stdio.h>
// Sample calculation : 
// A : 2
// R : 3
// N : 5
// 1. AP 
// AP = A → 2
// AP = AP + R
// AP = 2 → 2 + 3 = 5
// AP = 5 → 5 + 3 = 8
// AP = 8 → 8+3 = 11
// AP = 11 → 11 + 3 = 14 
// 2 ,5 ,8 ,11 ,14
// 2. GP
// GP = A → 2
// GP = 2
// GP = 2 → 2*3=6
// GP = 6 → 6*3=18
// GP = 18 → 18*3=54
// GP = 54 → 54*3=162
// 2 6 18 54 162 
// 3. HP
// HP = A → 2
// res = (float)1/HP
// res = (float)1/2  = 0.500000
// res = (float)1/5  = 0.200000
// res = (float)1/8  = 0.125000
// res = (float)1/11 = 0.090909
// res = (float)1/14 = 0.071429

int main()
{
    int A,R,N,AP,GP,HP;
    float res;
    printf("Enter the First Number 'A' : ");
    scanf("%d",&A);
    printf("Enter the Common Difference/Ratio 'R' : ");
    scanf("%d",&R);
    printf("Enter the number of terms 'N' : ");
    scanf("%d",&N);
    if(N <= 0)
    {
        printf("Invalid Input\n");
    }
    else{
        AP = A;
        printf("AP = ");
        for (int i = 1; i <= N; i++)
        {
            printf("%d ",AP);
            if(i<N)
            {
                printf(",");
            }
            AP = AP + R;
        }
        printf("\n");
        GP = A;
        printf("GP = ");
        for (int i = 1; i <= N; i++)
        {
            printf("%d ",GP);
            if(i<N)
            {
                printf(",");
            }
            GP = GP + R;
        }
        printf("\n");
        HP = A;
        printf("HP = ");
        for (int i = 1; i <= N; i++)
        {
            res = (float)1/HP; 
            printf("%f ",res);
            if(i<N)
            {
                printf(",");
            }
            HP = HP + R;
        }
        printf("\n");
    }
    return 0;
}