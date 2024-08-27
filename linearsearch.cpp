//Search a specific value from the set of data and if you want the replace it with new value :
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	int *a,n,m,i,c,d,z=0;
	char x;
cout<<"\033[1;31mEnter the range of the Memory :";
cin>>n;
a=(int*)malloc(n*sizeof(int));
cout<<"\n\n\033[1;35mEnter the data :\n\n";
for(i=0;i<n;i++)
{
 cout<<"Enter the "<<i+1<<" value: ";
 cin>>a[i];
}
cout<<"\n\n\033[1;33mThe given data is = \n\n";
for(i=0;i<n;i++)
{
 cout<<"\t"<<a[i]<<endl;
}
cout<<"\n\033[1;31mEnter the number which you want to search : ";
cin>>m;

for(i=0;i<n;i++)
{
	if(a[i]==m)
   {
  cout<<"\n\033[1;32mThe given data "<<m<<" is present at "<<i+1<<" index... ";
  c=i;
  z=1;	
   }
}
if(z!=0)
{
cout<<"\n\033[1;31mAre you want to change the current search value ("<<m<<") present at "<<c+1<<" index [y/n] : ";
cin>>x;
if(x=='y')
{
cout<<"\n\033[1;32mEnter the new value :";
cin>>d;
 a[c]=d;
 cout<<"\n \033[1;34mThe updated values are =\n\n";
 for(i=0;i<n;i++)
 {
 	cout<<"\t"<<a[i]<<endl;
 }
}
else if(x=='n')
{
cout<<"\n\n Thank you ! \n\n";
}
cout<<"\n\033[1;32mThank you \n\n";
}
else
{
 cout<<"\n \033[1;32mSORRY, The given value is not exist into the set of data ...\n\n";
}
return 0;
}

