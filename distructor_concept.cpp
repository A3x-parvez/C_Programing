#include<iostream>
using namespace std;
int count=0;
class demo
{
  public:
    demo()
	{
	count++;
	cout<<"The object created "<<count<<endl;	
    }
	~demo()
	{
	count--;
	cout<<"The object deleted "<<count<<endl;
	}
};

int main()
{
	demo a,b,c,d,e;
	cout<<endl;
}
