//program to demonstrate the concept of static BEHAVIOUR
//A static member function can only access static data member, other static member functions and any other functions from outside the class

#include<iostream>
using namespace std;         //if you dont write using namespace std then write  std::cout

class Box
{
	
private:

double length;             // Length of a boxdouble 
double breadth;                  // Breadth of a boxdouble
double height;                  // Height of a box

public:
static int objectCount;           //we cant initilize here otherwise compiler generate error  ---->in-class initialization of non-const static
// Constructor definition
Box(double l=2.0,double b=2.0,double h=2.0)         //Parameterized constructor with default value 
{  
       cout <<"Constructor called."<< endl;       
                                                             //int Box::objectCount =0;	   --->not possible to initilize static member inside same class ---> error: qualified-id in declaration before '=' token
       length = l;         
	   breadth = b;        
	   height = h;
	   // Increase every time object is created         
	   objectCount++;
	   //Static member variables (data members) are not initialied using constructor, because these are not dependent on object initialization.
}

double Volume()
{
   return length * breadth * height;
}

static int getCount()
{
	return objectCount;
}
};

// Initialize static member of class Box
int Box::objectCount =0;                 //if not initilize compiler generate error 

int main(void)
{
 // Print total number of objects before creating object.
 cout <<"Inital Stage Count: "<<Box::getCount()<< endl;
 Box Box1(3.3,1.2,1.5);           // Declare box1
 Box Box2(8.5,6.0,2.0);           // Declare box2
 
 // Print total number of objects after creating object.   
  cout <<"Final Stage Count: "<<Box::getCount()<< endl;
  
  return 0;
}

/*
output of the program

Inital Stage Count: 0
Constructor called.
Constructor called.
Final Stage Count: 2
*/