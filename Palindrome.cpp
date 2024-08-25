#include <iostream>
using namespace std;
int isPalindrome(int num1)
{
    int n1=0;
    int rem=0;
    int reverse1=0;
    n1=num1;
    do
    {
        rem=num1%10;
        reverse1=reverse1*10+rem;
        num1/=10;
    }
    while(num1!=0);
    cout<< reverse1;
        if (n1 ==reverse1)
            cout << " The number is a palindrome."<<endl;
        else
            cout << " The number is not a palindrome."<<endl;
            }
int main()
{
    int n=0;
    cout << "Enter a number to find the reverse of that number."<<endl;
    cin>>n;
    cout<<isPalindrome(n)<<endl;
        return 0;

    }
