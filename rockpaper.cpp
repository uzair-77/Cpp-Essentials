#include <iostream>

using namespace std;

int main()
{
 int playerA,playerB; // Players to play
 int num1=1; //Rock
 int num2=2; //Paper
 int num3=3; //Scissor
 cout<<"********** Welcome to Rock,Paper,Scissor Game **********"<<endl;
 cout<<"********** For Rock Press 1 **********" << endl;
 cout<<"********** For Paper Press 2 **********" << endl;
 cout<<"********** For Scissor Press 3 **********" << endl;

 cout<<" Player 1: Enter a number "<<endl;
 cin>>playerA;
 cout<<" Player 2: Enter a number "<<endl;
 cin>>playerB;

 if(playerA==1 && playerB==2)
    cout<<"Player B is winner"<<endl;

 else if(playerA==1 && playerB==3)
 cout<<"Player A is winner"<<endl;

  else if(playerA==2 && playerB==1)
 cout<<"Player B is winner"<<endl;

  else if(playerA==2 && playerB==3)
 cout<<"Player B is winner"<<endl;

  else if(playerA==3 && playerB==1)
 cout<<"Player B is winner"<<endl;
  else if(playerA==3 && playerB==2)
 cout<<"Player A is winner"<<endl;

 else
    cout<<"Invalid given values"<<endl;

    return 0;
}
