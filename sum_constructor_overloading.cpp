#include<iostream>
using namespace std;

class sum
{
	int a,c;
	float b;
 public:
 	void add(int x,int y,float z)
 	{
 		cout<<"The sum is = "<<x+y+z;
	 }
	 
	void add(int x,float y,int z)
	{
		cout<<"The sum is = "<<x+y+z;
	}
	float add(float x,int y,int z)
	{
		return (x+y+z);
	}
};

int main()
{
	sum obj,obj1,obj2;
	obj.add(2,3,5.0);
	cout<<endl;
	obj1.add(2,3.0,5);
	cout<<endl;
	int z=obj2.add(2.0,3,5);
	cout<<"The sum is = "<<z;
}
