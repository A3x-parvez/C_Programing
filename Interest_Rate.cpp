#include<iostream>
using namespace std;
//Create class veritable and public function ;
class intrest
{
private:
int p,n;
float r,v;
public:
void cal(int);
};
//Function for input & calculator & print table ;
void intrest::cal(int m)
{
cout<<"\033[1;33mUSER no."<<m<<endl;
cout << "\033[1;31m";
cout<<"Enter the amount : ";
cin>>p;
cout<<"Enter the intrest rate : ";
cin>>r;
cout<<"Enter the time (years) : ";
cin>>n;
cout<<endl<<endl;
int i;
cout<<"\033[1;32mPrincipal\tRate\t  Value of money"<<endl;
cout<<"________\t___\t  ______________"<<endl<<endl;
for(i=1;i<=n;i++)
{
 v=p*(1+r);
 cout<<p<<"\t\t"<<r<<"\t\t"<<v<<endl;
 p=v;
}
cout<<endl;
}
//Main function and call the function ;
int main()
{
intrest us1,us2,us3;
us1.cal(1);
us2.cal(2);
us3.cal(3);
return 0;
}
//writing by parvez ,26/08/2023, 1:55pm:
