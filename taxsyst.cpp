#include<iostream>
using namespace std;
int main()
{
int room1,room2,costs,tax,costl,cost;
cout<<"enter the small room";
cin>>room1;
cout<<"enter the large room";
cin>>room2;
cout<<"price the small room :";
cin>>costs;
cout<<"price the lerge room";
cin>>costl;
cost=(room1*costs)+(room2*costl);
cout<<"The total + "<<cost<<endl;
tax=(cost*6/100);
cout<<"The tax is = "<<tax;
return 0;
}
