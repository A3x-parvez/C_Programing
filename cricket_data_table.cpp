#include<iostream>
#include<string>
using namespace std;
class play
{
 private:
 string name;
 int run,inn,n_out;
 float avg;
 public:
 void input(int m);
 void disp();
};

void play::input(int m)
{   
    cout<<"\033[1;31mPlayer : "<<m<<endl;
    cout<<"\033[1;35m";
	cout<<"Enter the player name : ";
	cin>>name;
	cout<<"Enter the run : ";
	cin>>run;
	cout<<"Enter the no of innings : ";
	cin>>inn;
	cout<<"Enter the no of not out : ";
	cin>>n_out;	
	cout<<endl;
    avg=(run/inn);
}

void play::disp()
{
    cout<<name<<"\t\t"<<run<<"\t"<<inn<<"\t "<<n_out<<"\t\t"<<avg<<endl;
}

int main()
{
	play p1,p2,p3;
  p1.input(1);
  p2.input(2);
  p3.input(3);
  cout<<"\033[1;32m";
  cout<<"Player name"<<"\tRun"<<"\tInnings"<<"\t Not_Out"<<"\tBatting_Avg"<<endl;
  cout<<"___________"<<"\t___"<<"\t_______"<<"\t _______"<<"\t___________"<<endl;
  p1.disp();
  p2.disp();
  p3.disp();
  return 0;
}
