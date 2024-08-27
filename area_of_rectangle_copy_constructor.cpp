#include<iostream>
using namespace std;

class sum
{
	float a,b;
 public:
 	sum(float x,float y)
 	{
 	a=x;
	b=y;	
	}
	
    sum( sum &h)
    {
	a=h.a;
	b=h.b;
    }
    
    void display()
    {
     float z=a*b;
     cout<<"The area is = "<<z;
	}
};

int main()
{
	sum obj(10,20);
	sum obj1(obj);
	obj.display();
	obj1.display();
}
