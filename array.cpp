#include <iostream>

using namespace std;

int main()
{

   int x;
   x=1;
   cout<<"Enter a number:";
   cin>>x;
   while(x<10)
   {
       cout<<x<<"\t"<<x*x<<"\t"<<x*x*x<<endl;
       x++;
   }

return 0;
}
