//Create 3 member array 3 class and store array value in class 1 and 2 and add the the two class and store in class 3 using friend function.
#include<iostream>
using namespace std;

class B;
class C;
class A
{
	int arr1[10];
	int r1;
 public:
 	void enter();
 friend void sum(A,B,C);
};

class B
{
	int arr2[10];
	int r2;
 public:
 	void enter();
 friend void sum(A,B,C);
};

class C
{
	int arr3[10];
	int r3;
 public:
 	void disp();
 friend void sum(A,B,C);
};

void A::enter()
{
	int i,n;
	cout<<"Enter range : ";
	cin>>n;
	r1=n;
	for(i=0;i<r1;i++)
	{
	cout<<"Enter the "<<i+1<<" eliment :";
	cin>>arr1[i];
    }
    cout<<endl;
}

void B::enter()
{
	int i,n;
	cout<<"Enter range : ";
	cin>>n;
	r2=n;
	for(i=0;i<r2;i++)
	{
	cout<<"Enter the "<<i+1<<" eliment :";
	cin>>arr2[i];
    }
    cout<<endl;
}

void C::disp()
{
	int i;
	cout<<endl<<"The sum of the Array :"<<endl;
	for(i=0;i<r3;i++)
	{
	cout<<arr3[i]<<"  ";
    }
  cout<<endl;
}

void sum(A obj1,B obj2,C obj3)
{
    int i,n;
    n=obj1.r1;
	for(i=0;i<n;i++)
	{
		obj3.arr3[i]=obj1.arr1[i]+obj2.arr2[i];
    }	
    obj3.r3=obj1.r1;
    obj3.disp();
}

int main()
{
	A obj1;
	B obj2;
	C obj3;
 obj1.enter();
 obj2.enter();
 sum(obj1,obj2,obj3);
}

