//program to demonstrate the concept of Static Variables inside Functions

#include<iostream>
using namespace std;

void counter()
{
    static int count = 0;
    cout << count++<<"\n";
}

int main()
{
    for(int i=0;i<5;i++)
    {
        counter();
    }
	
	return 0;
}

/*output 
0
1
2
3
4

*/