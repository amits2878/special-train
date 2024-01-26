#include <iostream>

struct {
	int a, b, c;
} t, &ptr = t;

using namespace std;

int main () {
	t.a = 10;
	t.b = 20;
	t.c = 30;
	cout << endl << ptr.a << " " << ptr.b << " " <<ptr.c << endl;
	//&ptr = t;
	//cout << ptr->a << " " << ptr->b << " " << ptr->c << endl;
	return 0;
}
