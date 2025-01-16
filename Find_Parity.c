#include<stdio.h>
/*
Description:WAP to count number of set bits in a given number and print parity
Sample Input:Enter the number : 7
Sample Output:Number of set bits = 3
Bit parity is Odd
*/
int main()
{
	int num,n,count,i,sum;				//declare variables
	printf("Enter the number :");		//prompting the user to enter the number
	scanf("%d",&num);					//geting the number from user
	count=0;							//initialize count
	for(i=0;i<31;i++)					//running iteration upto 32 times
	{
		sum=(num&(1<<i));				//initialize sum
		if(sum==0)						//check if sum is a zero or non-zero
		{
			count;						//if sum=0 keep count as it is
		}
		else
		{
			count++;					//if sum=non-zero increment count
		}
	}
	printf("Number of set bits = %d\n",count);	//print number of set bits
	if(count&(1<<0)==1)							//check number of set bits are odd or even
	{
		printf("Bit parity is Odd\n");			//print odd if number of bits is non-zero
	}
	else
	{
		printf("Bit parity is Even\n");			//print even if number of bits is zero
	}
	return 0;
}
