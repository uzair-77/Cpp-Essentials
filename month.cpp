#include <iostream>

using namespace std;

int main()
{
   int month;
   cout<<"Enter the month number:";
   cin>>month;
   switch (month)
   {
   case 1:
    cout<<"Month is January with 31 days";
    break;
   case 2:
    cout<<"Month is February with 28 or 29 days";
    break;
   case 3:
    cout<<"Month is March with 31 days";
     break;
   case 4:
    cout<<"Month is April with 30 days";
     break;
   case 5:
    cout<<"Month is May with 31 days";
     break;
   case 6:
    cout<<"Month is June with 30 days";
     break;
   case 7:
    cout<<"Month is July with 31 days";
     break;
   case 8:
    cout<<"Month is August with 31 days";
     break;
   case 9:
    cout<<"Month is September with 30 days";
     break;
   case 10:
    cout<<"Month is October with 31 days";
     break;
   case 11:
    cout<<"Month is November with 30 days";
     break;
   case 12:
    cout<<"Month is December with 31 days";
     break;
   default:
   cout<<"invalid input";
   }

return 0;
}
