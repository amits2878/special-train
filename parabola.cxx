#include <iostream>
#include "parabola.h"

const int no_of_pts = 20;

int main()
{
   point g[no_of_pts];  	// uses default ctor

   graph(0, 2, 0.1, parabola, 5, g);
   cout << "First 20 samples:" << endl;
   for (int i = 0; i < no_of_pts; ++i) {
      g[i].print();
      if (i % 5 == 4)
         cout << endl;
      else
         cout << "  ";
   }
}
