#include<iostream>

using namespace std;

int main()
{
	int num[10],i,t,j,k,target,l,n=5;
	for(k=0;k<5;k++)
	{
		cout<<"Enter the value of index "<<k+1<<" : ";
		cin>>num[k];
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(num[j]>num[j+1])
			{
			t=num[j];
			num[j]=num[j+1];
			num[j+1]=t;
		}
		}
	}
	cout<<"Enter target :";
	cin>>target;
		cout<<"[";
	for(l=0;l<5;l++)
	{
		if(num[l]==target)
		{
		cout<<l;
	    }	
	}
	cout<<"]";
}
