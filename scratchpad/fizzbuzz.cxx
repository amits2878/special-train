#include <iostream>
#include <thread>

using namespace std;

void fzbzFn (int num) {
	int arr[num];
	//for (auto&& cnt[1, num] : arr) {
	for (int cnt = 1; cnt <= num; cnt++) {
		if (cnt % 3 == 0 && cnt % 5 == 0)
			cout << endl << cnt << ": fizzbuzz \n";
		else if (cnt % 3 == 0)
			cout << endl << cnt << ": fizz \n";
		else if (cnt % 5 == 0) 
			cout << endl << cnt << ": buzz \n";
		else
			cout << endl << cnt << endl;

	}
}

int main () {
	int cnum;
	cout << " Enter number of kids :";
	cin >> cnum;
	cout << endl;
	thread thr(fzbzFn, cnum);
	thr.join();
	return 0;
}
