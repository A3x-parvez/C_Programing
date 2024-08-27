#include<iostream>
using namespace std;

int main()
{
	int s_room,l_room,s_cost,l_cost;
	cout<<"Enter the num of small room : ";
	cin>>s_room;
	cout<<"Enter the cost for small room : ";
	cin>>s_cost;
	cout<<"Enter the num of large room : ";
	cin>>l_room;
	cout<<"Enter the cost for large room : ";
	cin>>l_cost;
	cout<<endl;
	 float total=(s_room*s_cost)+(l_room*l_cost);
	cout<<"The total cost is = "<<total<<endl;
     float tax=((total*6)/100);
	cout<<"The tax price is = "<<tax<<endl;
	cout<<"Total price is = "<<(tax+total)<<endl;
	return 0;	
}
