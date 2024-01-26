#include <iostream>
#include "gcd2num.h"
using namespace std;


int main () {
	int n1 = 1, n2 = 0;
	cout << "Enter 2 numbers : ";
	cin >> n1 ;
	cin >> n2;
	auto [gCallcnt, resGcd] = calcGcd (n1, n2);
	cout << endl << "GCD result : " << resGcd << endl;
	cout << "GCD call count : " << gCallcnt << endl;
	return 0;

}
