#include<iostream>
#include<cstring>
using namespace std;
class user
{
	string name;
	float unit;
	float cost;
  public:
	void inp();
	void disp();
};

void user::inp()
{
  cout<<"Enter the user name : ";
  cin>>name;
  cout<<"Enter the unit : ";
  cin>>unit;
}

void user::disp()
{
  float tax;
  if(unit<=100)
  {
 cost=(unit*60)/100;	
  }
  else if(unit>100 && unit <=300)
  {
    unit=unit-100;
 cost=(100*60)+(unit*80);
 cost=cost/100;
  }
  else if(unit>300)
  {
  	cost=(unit*90)/100;
  }
  
  if(cost<50)
  {
  	cost=50;
  }
  else if(cost>300)
  {
  	tax=(cost*15)/100;
  	cost=cost+tax;
}
  cout<<"Your total bill is : "<<cost<<endl;
}

int main()
{
	user u1,u2,u3;
	u1.inp();
	u1.disp();
	u2.inp();
	u2.disp();
	u3.inp();
	u3.disp();
	
  return 0;
}




