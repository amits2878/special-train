#include <iostream>
#include <utility>
#include <vector>
#include <string>


using namespace std;

int main () {

    pair <int, string> myPair;
    ///pair <int, string> tmpPair;

    myPair.first = 11;
    myPair.second = "amit srivastava";
    pair <int, string> tmpPair (myPair);

    cout << myPair.first << endl;
    cout << myPair.second << endl;

    vector <string> veCars = {"volvo", "audi", "rolls royce", "bugati", "corvette"};
    bool isEmpty = veCars.empty() ? true : false;
    cout << "car at :" << veCars[4] << " -- " << veCars[4] << " -- " << isEmpty << endl;
    veCars.at(2) = "Jeep";
    for (string vehicle: veCars)
        cout << vehicle << "\t";
///2D vector - trying for elements as user input
    vector <vector <string>> serialNum ; /// {{"trucks", "two"}, {"cars", "four"}, \
                                {"buses", "six"}, {"chopper", "one"}};
    for (string sno: serialNum) {

            string tmp;
            getline(cin, tmp) ;
            sno.push_back(tmp);
    }
    for (const auto &sno: serialNum) {
        for (const auto &ele : sno) {
            cout << ele << "\t";

        }
        cout << endl;
    }

    return 0;
}
