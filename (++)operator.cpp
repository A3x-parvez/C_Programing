#include<iostream>
using namespace std;

class name
{
	int num;
  public:
  	name(int num)
  	{
  	  num=num;
	}
	void display()
	{
		cout<<"The value = "<<num<<endl;
	}
    /*	bool operator==(name ob)
	{
	
		if(num=ob.num)
		{
			return true;
		}
		else
		{
			return false;
		}
	}*/
	name operator++()
	{
		num++;
	}
	
};

int main()
{
	name ob1(10);
	ob1.display();
	
}

