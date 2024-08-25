#include <iostream>

using namespace std;

int main()
{
   char op;
   double num1,num2;
   cout<<"Enter the operators(+,-,*,/):"<<endl;
   cin>>op;
   cout<<"Enter the two numbers one by one:"<<endl;
   cin>>num1>>num2;
   switch (op)
       {
       case'+':
        cout<<num1<<"+"<<num2<<"="<<(num1+num2);
            break;
       case'-':
        cout<<num1<<"-"<<num2<<"="<<(num1-num2);
        break;
       case'*':
        cout<<num1<<"*"<<num2<<"="<<(num1*num2);
        break;
       case'/':
        cout<<num1<<"/"<<num2<<"="<<(num1/num2);
        break;
       default:
       cout<<"invalid operator";
       }
return 0;
}
