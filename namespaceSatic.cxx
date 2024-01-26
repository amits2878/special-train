#include <iostream>
using namespace std;

int foo (int);
inline int goo (int);
int main()
{
cout << "foo(5) = " << foo(5) << endl;
cout << "goo(5) = " << goo(5) << endl;
}
