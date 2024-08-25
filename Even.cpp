#include <iostream>

using namespace std;

int main()
{
    int A;
    int num1;
    cout<<"Enter the num1:"<<endl;
    cin>>num1;
    switch (A=num1%2)
    {
case 0:
        cout<<"num1 is an even integer";
        break;
case 1:
        cout<<"num1 is an odd integer";
        break;
default:
cout<<"invalid input";
    }

return 0;
}
