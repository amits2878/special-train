#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>
#include <random>
#include <thread>
using namespace std;
namespace sc = std::chrono;

// read more of this Random Num Engine
mt19937 mts;

void funcTh (const string& strfn) { 
	//strfn = "i am learning cpp 17";
	cout << endl << "Hello I am std::thread " << endl;// << strfn << endl;
}

void func (vector <int>, int &&);
int main () {
	const string str1 = "i am learning c++11 +";
	string str4 = "i am learning c++11 $$";
	cout << endl << str1 << " before" << endl;
	thread th1 (funcTh, cref(str1)); // <<--ref()
	th1.join();
	cout << endl << str1 << " after" << endl;
	thread th2 ([&str4] (string sname) {
			str4+=" amit" + sname;
		}, " srivastava" );
	th2.join();
	cout << endl << str4 << endl;
	int x{10};
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int c = 10, d = 30;
	//c++11/14/17 way to iterate over for, only 
	//to traverse all elements
	for (auto cnt : arr) 
		cout << cnt << endl;
	//lambda with arguments local "in [] bracket"
	// lambda function arguments formal args
	auto sum = [c = 12, &d](int a, int b) {
		return a + b + c + (++d);
	};
	cout <<endl << sum(3,8) << endl << x;
	cout <<endl << c << " "<<  d << endl << x;
	sc::seconds(2);
	2s;
	int divs = 3;
	vector <int> vec{1, 2, 3, 4, 5, 6, 7, 8};
	/// Lambda function as predicate to algorithm
	int n_even = count_if (vec.begin(), vec.end(), 
			[divs] (int n) { return (n%divs == 0); });
	cout << endl << "2's multiple :" << n_even << endl;

	cout << endl << "inside func: beforesize of vec is " << vec.size();
	func(vec, move(x));
	cout << endl << "inside func: after size of vec is " << vec.size() << endl << x << endl;
	// random number generation int and real(float)
	uniform_int_distribution <int> uid (0,100);
	for (int rnum = 0; rnum < 10; ++rnum) 
		cout << uid (mts) << " , " ;
	cout << endl;
	uniform_real_distribution <float> ufd (11,10.45);
	for (int rnum = 0; rnum < 10; ++rnum) 
		cout << ufd (mts) << " , " ;
	cout << endl;
	return 0;
}
///rvalue reference "second arg"
void func (vector <int> veca, int&& rvalRef) {
	cout << endl << "inside func: size of vec is " << veca.size() << endl << rvalRef;
}
