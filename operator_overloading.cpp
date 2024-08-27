#include<iostream>
#include<cstring>
using namespace std;

class name
{
	char nam[10];
  public:
  	name(char n[])
  	{
  	  strcpy(nam,n);
	}
	void display()
	{
		cout<<"The string is = "<<nam<<endl;
	}
	bool operator==(name ob)
	{
		int v=strcmp(nam,ob.nam);
		if(v==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	name ob1("rahul"),ob2("rahul");
	ob1.display();
	ob2.display();
	if(ob1==ob2)
	{
		cout<<"value same .";
	}
	else
	{
		cout<<"Not same .";
	}
}

