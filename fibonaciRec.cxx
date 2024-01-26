/*fibonacii - 12/25/2025*/

#include <iostream>
using namespace std;

int fibo (int) ;
int main () {
	int n =10;
	int count = 0;
	while ( count <= n) {
		cout << endl << fibo (count);
		count++;
	}
	return 0;
}

int fibo (int fn) {
	int fnNum;
	return fnNum = (fn <= 1) ? fn : fibo(fn-2)+fibo(fn-1);
}


