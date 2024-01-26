#include <iostream>
#include <gtest/gtest.h>

using namespace std;

enum c_kind {
	consumer,
	wholesaler,
	retailer
};

class customer {
	private:
		string last_name, first_name;
		int id_number;
		c_kind t;
	public:
		//enum c_kind { consumer, wholesaler, retailer };
		customer (const string& ln, const string& fn, c_kind ct) {
			last_name = ln; first_name = fn; t = ct; }
		void set_name(const string& l, const string& f)
			{ last_name = l; first_name = f; }
		c_kind get_kind() const { return t; }
		void set_kind(c_kind k) { t = k; }
		void print() const { cout << (first_name + " " + last_name) << endl; }
		double price_discount() const;
};

int main () {
	customer c1("srivastava", "amit", retailer);
	c1.print();
	cout << "consumer type = " << c1.get_kind() << endl;
	//c1.set_name("srivastava", "amit");
	//c1.set_kind (c1.wholesaler);
	return 0;
}
