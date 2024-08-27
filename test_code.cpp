#include<iostream>
#include<cstring>
using namespace std;

string word;
int count=0;
int main()
{
   cout<<"Enter the word :";
   cin>>word;
   int i=0;
  for(i=0;word[i]!='\0';i++)
   {
   	if(word[i]==(++word[i+1]))
   	{
   	  word[i+1]="z";
   	  count++;
	}
   }
   cout<<word;
}
