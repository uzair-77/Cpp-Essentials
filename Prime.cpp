#include <iostream>

using namespace std;

int main()
{
    int n,i,m=0,p=0;
    cout<<"Enter a number to check prime number:";
    cin>>n;
    m=n/2;
    for(i=2; i<m; i++)
    {
        if(n%i==0)
        {
            cout<<"Number is not Prime."<<endl;
            p=1;
            break;
        }
    }
    if (p==0)
        cout<<"Number is Prime."<<endl;
    return 0;
}
