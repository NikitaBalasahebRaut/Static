//program to demonstrate the concept of static characterstics and behaviour

using namespace std;
#include<iostream>

class Demo
{
 public:
       int i;                //nonstatic characterstics 
	   int j;
	   static int k;         //static characterstics 
	   
	   void fun()
	   {
	     cout<<this->i<<"\n";
		 cout<<this->j<<"\n";
		 cout<<k<<"\n";
	   }
	   static void gun()
	   {
	      // cout<<this->i<<"\t"<<this->j;     //not allow
		  //cout<<i<<j;                        //not allow
		  cout<<k<<"\n";
	   }
};
int Demo::k = 101;                //static member defination

Demo obj;                       //global object

int main()
{

 cout<<obj.i<<endl;
 cout<<obj.j<<endl;
 
 cout<<Demo::k<<endl;
 cout<<obj.k<<endl;                //internally call    Demo::k
 
 obj.fun();                     //fun(&obj)
 Demo::gun();
 obj.gun();                        //internally Demo::gun
 
 return 0;
}

/*
output 
0
0
101
101
0
0
101
101
101
*/
		   