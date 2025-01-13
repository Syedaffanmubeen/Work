#include<iostream>
using namespace std;

int ispalindrome(int num)
{
    int remainder,result = 0;
    while (num != 0)
    {
        remainder= num % 10;
        result = result * 10 + remainder;
        num = num / 10;
    }
    return result;
    
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int result = ispalindrome(num);
    if(result == num)
    {
        cout<<"Entered number is palindrome"<<endl;
    }
    else
    {
        cout<<"Entered number is not a palindrome"<<endl;
    }
    return 0;
}