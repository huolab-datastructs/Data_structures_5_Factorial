#include <iostream>
#include "fact.h"
using namespace std;

void main() {
   int n;
   while (1) {
      cout << "Which Factorial number do you want?" << endl;
      cout << "Enter a negative number to stop." << endl;
      cin >> n;
      if (n > -1) cout << "... " << factorial(n) << endl;
      else break;
   }
}
