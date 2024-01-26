// C++ program to demonstrate the working of weak_ptr
// Here both smart pointer P1 and P2 are pointing to the
// object Addition to which they both does not maintain
// a reference of the object
#include <iostream>
using namespace std;
// Dynamic Memory management library
#include <memory>

class Rectangle {
	int length;
	int breadth;

public:
	Rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}

	int area() { return length * breadth; }
};

int main()
{
	Rectangle r1 (10, 5);
	//---\/ Smart Pointer
	shared_ptr<Rectangle> P1( new Rectangle (10, 5));
	
	// create weak ptr
	weak_ptr<Rectangle> P2 (P1);
	
	cout << "P1" << *(P1) << endl;
	// This'll print 50
	cout << P1->area() << endl;

	// This'll print 1 as Reference Counter is 1
	cout << P1.use_count() << endl; 
	return 0;
}

