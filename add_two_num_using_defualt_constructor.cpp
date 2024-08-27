#include<iostream>
using namespace std;

class sum
{
	int a,b;
 public:
 	sum()
 	{
 	a=10;
	b=20;	
	}
	void add()
	{
		cout<<"The sum of the number : "<<a+b;
	}
};

int main()
{
	sum obj=sum();
	obj.add();
}
