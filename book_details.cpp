#include<iostream>
#include<cstring>
using namespace std;

class book
{
	char title[30];
	float price;
  public:
    void getdata(char t[30],float p);
	void putdata();	
};

void book::getdata(char t[30],float p)
{
  strcpy(title,t);
  price=p;
}

void book::putdata()
{
  cout<<"The name of the book : "<<title<<endl;
  cout<<"The price of the book is : "<<price<<endl;
}

int main()
{
	book b1,b2,b3;
	b1.getdata("Elplore IT",350);
	b1.putdata();
	b2.getdata("JAVA",300);
	b2.putdata();
	b3.getdata("Computer Application",400);
	b3.putdata();
	return 0;
}
