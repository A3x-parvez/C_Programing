#include<iostream>
using namespace std;
class weight
{
	float w;
	float m;
  public:
  	void enter_first();
  	void enter_second();
  	void ans(weight obj1,weight obj2);
};

void weight::enter_first()
{
	float a,b;
	cout<<"Enter the first weight : "<<endl;
	cout<<"Enter kg :";
	cin>>a;
	cout<<"Enter gram :";
	cin>>b;
	w=a*1000+b;
}

void weight::enter_second()
{
	cout<<"Enter the secnd weight : "<<endl;
	float a,b;
	cout<<"Enter the first weight : ";
	cout<<"Enter kg :";
	cin>>a;
	cout<<"Enter gram :";
	cin>>b;
	m=a*1000+b;
}

void weight::ans(weight obj1,weight obj2)
{
	float ans=obj1.w+ obj2.m;
	ans=ans/1000;
	cout<<"The total weight is : "<<ans<<" kg."<<endl;
}

int main()
{
  weight obj1,obj2,obj3;
  obj1.enter_first();
  obj2.enter_second();
  obj3.ans(obj1,obj2);
}
