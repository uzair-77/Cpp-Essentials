#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
    float a;
    cout<<"Enter a decimal number to get its floor value"<<endl;
    cin>>a;
    float result = floor(a);
    cout<<"The floor value of  "<<a<<" is  "<< result<<endl;


    return 0;
}
