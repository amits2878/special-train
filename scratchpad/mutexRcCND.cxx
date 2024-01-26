#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

using namespace std;
const long cntGbl{5};

int sum = 0;
mutex mtx;
void incrCnt (int thN, int num1, int num2) {
	//mtx.lock();
	//takes care of lockin and unlocking both	
	lock_guard <mutex> lg (mtx);
	int foo = 28378;
	for (int tcnt = 1; tcnt <= cntGbl; tcnt++) {
		sum += num1 + num2;
		cout << this_thread::get_id() << " : " << " I am thread : " 
			<< thN << " -- " << tcnt << " : sum " << sum << " " << 
			foo << endl;

	}
	//shared_lock <shared_mutex> sl (mtx);
	//++foo;
	//cout << "dob " << foo << endl;
	//mtx.unlock();
}

int main () {
	int tn{0};
	cout << "\nEnter threads to start : ";
	cin >> tn;
	vector <thread> th;
	for (int i = 0; i < tn; i++) {
		th.push_back (thread(incrCnt, i, (2*i), (3*i)));
	}
	for (auto& tf : th) {
		tf.join();
	}
	//cout << endl << "dob " << foo << endl;
	return 0;
}
	

