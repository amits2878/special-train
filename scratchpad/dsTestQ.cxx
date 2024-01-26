#include <iostream>
using namespace std;

class mydata {
	public:
	string name; long mobile; unsigned int age; };
class qEle {
	mydata tdata;
	qEle* qPtr;
};
class myQ {
	qEle qItem;
	public:
	void printdata() const { cout << "hello " << endl; }
};

int main () {
	return 0;
}
