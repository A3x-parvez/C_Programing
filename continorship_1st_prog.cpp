#include<iostream>

using namespace std;

class a
{
	int num;
 public:
 	void inp()
 	{
 		cout<<"Enter number:";
 		cin>>num;
	}
	void disp()
	{
		cout<<"the value ="<<num;
	}
};

class b
{
	int val;
	a ob;
	public:
	  void input()
	  {
	  	cout<<"Enter value : ";
	  	cin>>val;
	  	ob.inp();
	  }
	  
	  void display()
	  {
	  	cout<<"The value is = "<<val<<endl;
	  	ob.disp();
	  	int t;
	  	t=val+ob.num;
	  	cout<<"The sum is = "<<t;
	  }
};


int main()
{
	b ob;
	ob.input();
	ob.display();
}
