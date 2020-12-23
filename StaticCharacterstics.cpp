//program to demonstrate the concept of static characterstics
//When we declare a member of a classas static it means no matter how many objects of the class are created, there is only one copy ofthe static member.

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
Box(double l=2.0,double b=2.0,double h=2.0)
{  
       cout <<"Constructor called."<< endl;       
                                                             //int Box::objectCount =0;	   --->not possible to initilize static member inside same class ---> error: qualified-id in declaration before '=' token
       length = l;         
	   breadth = b;        
	   height = h;
	   // Increase every time object is created         
	   objectCount++;
	   
}

doubleVolume()
{
   return length * breadth * height;
}

};

// Initialize static member of class Box
int Box::objectCount =0;                 //if not initilize compiler generate error 

int main(void)
{
  Box Box1(3.3,1.2,1.5);    // Declare box1
  Box Box2(8.5,6.0,2.0);     // Declare box2
  
  // Print total number of objects.   
  cout <<"Total objects: "<<Box::objectCount << endl;
  
  return 0;
}

/*
output of the program
Constructor called.
Constructor called.
Total objects: 2
*/