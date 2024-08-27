#include<iostream>
using namespace std;
class add
{
 public:
	void func(int num)
	{
		int c=0;
		int rem,total;
		while(num!=0)
		{
			num=num/10;
			c++;
		}
		if(c==1)
		{
			cout<<"The sum is : "<<num;
		}
		else 
		{
			rem=num%10;
			total=total+rem;
			func(num);
		}
	}
};


int main()
{
 add obj;
 int num;
 cin>>num;
 obj.func(num);	
}
