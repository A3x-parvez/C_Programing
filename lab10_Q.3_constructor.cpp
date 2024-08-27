#include<iostream>
#include<string>
using namespace std;
 class serial
 {
     string title;
     int s_code;
     float duration;
     int num_epis;
public:
     serial(float d,int ne)
     {
         duration=d;
         num_epis=ne;
     }
      void newserial(string ,int);
      void otherentries(float du,int en)
     {
         duration=du;
         num_epis=en;
     }
     void dispdata()
     {
         cout<<"The serial title : "<<title<<endl;
         cout<<"The serial code is : "<<s_code<<endl;
         cout<<"The serial duration is : "<<duration<<endl;
         cout<<"The number of episodes is : "<<num_epis<<endl;
     }
 };
 
 void serial::newserial(string t,int num)
 {
     title=t;
     s_code=num;
 }
 
 int main()
 {
 	string name;
 	int code;
 	float dur;
 	int epi;
 	
 	cout<<"Enter the name od serial : ";
 	cin>>name;
 	cout<<"Enter the serial number : ";
 	cin>>code;
 	cout<<endl;
     serial obj(30,10) ;
     obj.newserial(name,code);
     obj.dispdata();
     cout<<endl;
     cout<<"Update the duration : ";
     cin>>dur;
     cout<<"Update the number of episoeds : ";
     cin>>epi;
     cout<<endl;
     obj.otherentries(dur,epi);
     obj.dispdata();
     return 0;
 }
