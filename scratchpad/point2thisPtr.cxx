#include <iostream>
using namespace std;

class point {
	   int x, y;
	public:
	   //point () : x(0), y(0) {}
	   point (int a, int b) : x(a), y(b) { }
	   void print () const { cout << endl << x << " " << y <<endl; }
	   void print (const string& obName) const {cout << "Name :" << obName << 
			   endl << "x :" << x << "y :" << y << endl; }
	   void addInverse () {
		   x = -(x);
		   y = -(y);
	   }
	   void plus (point d) {
	      x += d.x;
	      y += d.y;
	   }
	   point* whichOb () { return this; }
};

int main () {

	point p1 (10, 10), p2 (5, 3);
	p1.print();
	p2.print();
	p1.plus(p2);
	p1.print("my name sum p1 ");
	p1.addInverse();
	p1.print("my name negative sum p1 ");
	cout << "this is p1 :" << p1.whichOb() << endl;
	cout << "this is p2 :" << p2.whichOb() << endl;
	return 0;
}
	      

