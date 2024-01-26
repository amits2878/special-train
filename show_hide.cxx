#include <iostream>
using namespace std;
#include "show_hide.h"

typedef void (X::*pfcn)();
int main()
{
   X  a, b, *pb = &b;
   int X::*pXint = &X::visible;
   pfcn pF = &X::print;

   a.set(8); a.reset();
   b.set(4); b.reset();
   a.print();
   a.*pXint += 1;
   a.print();
   cout << "\nb.visible = " << pb ->*pXint;
   (b.*pF)();
   pF = &X::reset;
   (a.*pF)();
   a.print();
   cout << endl;
}
