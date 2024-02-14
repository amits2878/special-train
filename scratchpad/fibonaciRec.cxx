/*recurrsion - 12/25/2025*/

#include <iostream>
using namespace std;

//Recussive functions -- fibonacci, powers, facto, 
//sum of digit in number, multiply (n times of m)

void printNum (int );
int fibo (int) ;
int powrs (int, int) ;
int facto (int) ;
int sumDig (int);
int mulDig (int, int);
bool isArrSorted (int [], int);

int main () {
	int n =10;
	int fact = n;
	int count = 0;
	int sumDgt = count;
	int sumNum = 12345;
	int mulNum = 45, nTimes = 4;
	int arrEle = 6;
	while ( count <= n) {
		cout << endl << fibo (count);
		count++;
	}
	int myfactorial = facto (fact);
	cout << endl << "Factorial: " << fact << 
		" = " << myfactorial << endl;

	int powers = powrs (5, 3);
	cout << endl << "Powers: 5 to 3" << 
		" = " << powers << endl;
	printNum (10);
	cout << endl;
	sumDgt = sumDig (sumNum);
	cout << "Sum of digits: " << sumDgt << endl;
	int mulDgt = mulDig (mulNum, nTimes);
	cout << "multiplication of digits: " << mulDgt << endl;
	int arrSrt[] = {1, 2, 8, 4, 5, 6};
	bool result = isArrSorted (arrSrt, arrEle);	
	if (result) 
		cout << endl <<"Sorted";
	else 
		cout << endl << "Not Sorted"<<endl;
	return 0;
}
///Fibonacci
int fibo (int fn) {
	return (fn <= 1) ? fn : fibo(fn-2)+fibo(fn-1);
}
//Factorial
int facto (int ft) {
	return (ft == 1) ? ft : ft * facto (ft-1);
}
//Powers
int powrs (int num, int pow) {
	return (pow == 0) ? 1 : num * powrs (num, pow-1);
}
//Print Numbers
void printNum (int num) {
	if(num == 0 ) 
	  return ;
	else printNum(num-1); 
	cout << num << " ";	
}
//sum digits of number
int sumDig (int sNum) {
	if (sNum == 0 ) return 0;
	int sumD = sumDig (sNum/10);
	int lastD = sNum %10;
	return sumD + lastD;
	//return (sNum == 0) ? sNum : (sumDig(sNum/10) + sNum%10);
}
//Multiply digits of number
int mulDig (int mNum, int nNum) {
	if (nNum == 0 ) return 0;
	int mulD = mulDig (mNum, (nNum-1));
	int mulRes = mNum + mulD;
	return mulRes;
	//return (sNum == 0) ? sNum : (sumDig(sNum/10) + sNum%10);
}

bool isArrSorted (int a[], int nEle) {
	if (nEle == 0 || nEle == 1) return true;
	if (a[0] < a[1])
	       return isArrSorted (a+1, nEle-1);
	else 
		return false;
}


