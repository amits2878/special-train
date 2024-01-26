 #include <boost/algorithm/string.hpp>
#include <iostream>
    using namespace std;
    using namespace boost;
    
    // ...

    string str1(" hello world! ");
    to_upper(str1);  // str1 == " HELLO WORLD! "
    trim(str1);      // str1 == "HELLO WORLD!"

    string str2=
       to_lower_copy(
          ireplace_first_copy(
             str1,"hello","goodbye")); // str2 == "goodbye world!";

int main () {

	cout << str2 << endl;
	return 0;
}
