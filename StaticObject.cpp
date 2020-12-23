//program for Static Class Objects

#include<iostream>
using namespace std;

class Abc
{
    int i;
    public:
    Abc()
    {
        i=0;
        cout << "constructor"<<"\n";
    }
    ~Abc()
    {
        cout << "destructor\n";
    }
};

void f()
{
    static Abc obj;
}

int main()
{
    int x=0;
    if(x==0)
    {
        f();
    }
    cout << "END\n";
	
	return 0;
}

/*
output 
constructor
END
destructor
*/