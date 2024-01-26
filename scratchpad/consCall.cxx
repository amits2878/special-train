#include <iostream>

using namespace std;

class base {
	public :
		base() {
			cout << "base called" << endl;
		}
};

class base1 {
	public :
		base1() {
			cout << "base1 called" << endl;
		}
};

class derived : public base, public base1 {
	public:
		derived () {
			cout << "derived called " << endl;
		}
};

int main () {
	derived d;
	return 0;
}
