#include <iostream>
#include "printable.h"
using namespace std;

void pr_ch :: print() const { cout << rep[c] << " --- " << c;; }

int main () {

	pr_ch c; 
	//cout << endl << c << endl;
	for (int i = 0; i < 128; i++) {
	  c = i;
	  c.print();
	  if (1 == 10) {
	     cout << endl; }
	  else
	     cout << "\t";
	}
	return 0;
}
