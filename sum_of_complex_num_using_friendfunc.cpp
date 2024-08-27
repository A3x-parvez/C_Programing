#include<iostream>
using namespace std;
class B;
class A
{
	int n;
	int m;
 public:
 	void enter();
  friend void add(A,B);
};

class B
{
	int x;
	int y;
 public:
 	void enter();
  friend void add(A,B);
};

void A::enter()
{
  cout<<"Enter the 1st complex number :-\n"<<endl;
  cout<<"Enter the real number :";
  cin>>n;
  cout<<"Enter the imaginary number :";
  cin>>m;
}

void B::enter()
{
  cout<<"Enter the 2nd complex number :-\n"<<endl;
  cout<<"Enter the real number :";
  cin>>x;
  cout<<"Enter the imaginary number :";
  cin>>y;
}

void add(A obj1,B obj2)
{
 int sum,com;
 sum=obj1.n+obj2.x;
 com=obj1.m+obj2.y;
 cout<<"\nThe sum of the complex number : "<<endl;
 cout<<sum<<" + "<<com<<"i";
}

int main()
{
	A obj1;
	B obj2;
	obj1.enter();
	obj2.enter();
	add(obj1,obj2);
}







