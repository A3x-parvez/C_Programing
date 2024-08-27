#include<iostream>
using namespace std;

class complex
{
	int a;
	int b;
 public:
 	complex(int x,int y)
 	{
 		a=x;
 		b=y;
	}
	void display()
	{
		cout<<"The number is =" <<a<<"+ i "<<b<<endl;
	}
	void operator+(complex ob)
    {
        complex z(0,0);
		z.a=a+ob.a;
		z.b=b+ob.b;
	    cout<<"The sum is ="<<z.a<<"+ i "<<z.b<<endl;
    }
    void operator-(complex ob)
     {
     	complex z(0,0);
     	z.a=a-ob.a;
     	z.b=b-ob.b;
     	cout<<"The substraction is ="<<z.a<<"+ i "<<z.b<<endl;
	 }
	 void operator*(complex ob)
	 {
	 	complex z(0,0);
	 	z.a=a*ob.a;
	 	z.b=b*ob.b;
	 	cout<<"The Multlipication is ="<<z.a<<"+ i "<<z.b<<endl;
	 }
	 void operator/(complex ob)
	 {
	 	complex z(0,0);
	 	z.a=a/ob.a;
	 	z.b=b/ob.b;
	 	cout<<"The division is ="<<z.a<<"+ i "<<z.b<<endl;
	 }
};


int main()
{
	complex s1(2,4),s2(6,8);
	s1.display();
	s2.display();

	s1+s2;
	s1-s2;
	s1*s2;
	s2/s1;
	
}
