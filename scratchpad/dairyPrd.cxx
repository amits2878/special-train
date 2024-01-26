#include <iostream>

using namespace std;

double weight = 25.0, calory = 375.0, protien = 5.0, fat = 8.0, carb = 0.0;

struct dairyItem {
	dairyItem () : dweight(0.0), dcalory(0.0) { }
	double dweight, dcalory; // dprotien, dfat,  dcarb ;
	double calcCal () {
		double cCal = (calory / weight) * dweight;
		return cCal;
	}
};
//class sister;
class brother {
	public:
	char name[20];
	int age;
	class sister ;
} a;
class sister {
	public:
	char name[20];
	int age;
	class brother sib;
} b;
int main () {
	dairyItem dI;
	cout << "Enter weight of Product :";
	cin >> dI.dweight;

	double pCalory = dI.calcCal ();

	cout << "the purchased product has " << pCalory << endl;
	return 0;
}
