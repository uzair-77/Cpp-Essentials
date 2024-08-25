#include <iostream>
using namespace std;

int main()
{
    int x , y;
    int max=0;
    int min=0;

do
{



    cout<<"Enter the 1st number"<<endl;
    cin>>x;
    cout<<"Enter the 2nd number"<<endl;
    cin>>y;
    if (x>y)
    {


        cout<<"The 1st number"<<x<< " is maximaum"<<endl;
    cout<<"The 2nd number"<<y<<"   is minimum"<<endl;
    max++;
    min++;
    }

    else if (y>x)
    {


     cout<<"The 2nd number  "<<y<< " is maximaum"<<endl;
    cout<<"The 1st number   "<<x<<"   is minimum"<<endl;
    max++;
    min++;
    }
    if(x==-1 || y==-1)
        break;

}
while (x!=-1 ||   y!=-1 );
cout <<"The maximum entries:"<<max<<endl;
cout<<"The minimum entries:"<<min<<endl;
    return 0;
}
