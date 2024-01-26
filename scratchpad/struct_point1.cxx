#include <iostream>

using namespace std;

class point { 
	private:
	   double x, y; 
	public:
	   void print (const string &str) const {
		cout << str << " " << x << " " << y << endl;
	   }
	   void print () const {
		cout << x << " " << y << endl;
	   }
	   void set (double u, double v) { x = u; y = v; }
	   void plus (point c);
};

void point :: plus (point c) {
	x += c.x;
	y += c.y;
}
	
/*double average(const point tdata[], int cnt) {
	point sum;
	for (int i = 0;i < cnt; ++i) {
		sum.x += tdata[i].x;
		sum.y += tdata[i].y;
		cout << tdata[i].x << "-- " << tdata[i].y <<endl;
	}
	cout << "SUM" << endl << sum.x << "-- " << sum.y <<endl;
	return (3.0);	
}
*/

int main () {
	//point data[5] = { {1.0, 2.0}, {1.0, 3.3}, {5.1, 0.5}, {2.0, 2.0}, {0, 0} };
	point d1, d2;
	d1.set(1.23, 2.21);
	d2.set(3.4, 4.8);
	d1.print();
	d2.print();
	d1.plus(d2);
	d1.print ("i am new d2 : == ");
	//double avg = average (data, 5);

	return 0;
}
