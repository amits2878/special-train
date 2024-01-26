#include <iostream>
#include "strNcompare.h"
using namespace std;

int main () {
	int nchar = 0;
	cout << "Enter character to compare : " ;
	cin >> nchar;
	const char* str1 = "amits";
	const char* str2 = "golu";
	cout << endl << streq_n (str1, str2, nchar) << endl ;	
	return 0;
}


