#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int x1 , x2 , x3, x4 , y1 , y2 ,y3 , y4;
    cout<<"Enter the coordinate x1 and y1"<<endl;
    cin>>x1;
    cin>>y1;
    cout<<"Enter the coordinate x2 and y2"<<endl;
    cin>>x2;
    cin>>y2;
    cout<<"Enter the coordinate x3 and y3"<<endl;
    cin>>x3;
    cin>>y3;
    cout<<"Enter the coordinate x4 and y4"<<endl;
    cin>>x4;
    cin>>y4;
    int a,b,c,d;
    a = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    b = sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
    c = sqrt(((x4-x3)*(x4-x3))+((y4-y3)*(y4-y3)));
    d = sqrt(((x1-x4)*(x1-x4))+((y1-y4)*(y1-y4)));
    if(a==b && c==d)
    {
        cout<<"The given points are of SQUARE"<<endl;
    }
    else if(a==c && b==d)
    {
        cout<<"The given points are of RECTANGLE or PARRALLELOGRAM"<<endl;
    }
    return 0;
}
