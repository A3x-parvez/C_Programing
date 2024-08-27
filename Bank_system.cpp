#include<iostream>
#include<string>
using namespace std;
class account
{
  string name;
  int acc;
  char type;
  float bal;
  public:
  void enter();
  void deposit();
  void withdraw();
  void display();  
};
void account::enter()
{
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter your account number :";
    cin>>acc;
    cout<<"Enter account type (S/C) : ";
    cin>>type;
    cout<<"Enter the balance : ";
    cin>>bal;
    cout<<endl;
}

void account::deposit()
{
	float a;
	cout<<"Enter the amount you want to deposit :";
	cin>>a;
	bal=(bal+a);
	cout<<" You sucessfully deposit "<<a<<" rupees .... "<<endl<<endl;
}

void account::withdraw()
{
	float w;
    cout<<"Enter the withdraw amount : ";
    cin>>w;
    bal=(bal-w);
    cout<<"You withdraw "<<w<< " rupees sucessfully , Thank you..."<<endl<<endl;
}
	
void account::display()
{
	cout<<"The user name is "<<name<<endl;
	cout<<"Dear user your total account balance is : "<<bal<<endl;
    cout<<"Thank you for using Bank of India "<<endl;	
}	

int main()
{
	account user1,user2;
	user1.enter();
	user1.deposit();
	user1.withdraw();
	user1.display();
	return 0;
}
