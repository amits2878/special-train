#include <iostream>
#include "maximumEArr.h"
using namespace std;

int main () {
	double arrM[] = {1.2, 5.1, 2.8, 7.9, 2.2, 9.3, 3.0};
	int aLen = sizeof(arrM)/sizeof(arrM[0]) - 1;
	double maxEl = maxEle (arrM, aLen);
	cout << endl << maxEl << endl <<aLen;
	return 0;
}
