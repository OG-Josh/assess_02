/*
 * Problem1.cpp
 *
 *  Problem 3 (zeroboth.cpp): Implement a void function called zeroBoth that
 *  has two call-by- reference parameters, both of which are variables of type int,
 *  and sets the values of both variables to 0.
 */

#include <iostream>
using namespace std;

void zeroBoth(int& a, int& b) {
  a = 0;
  b = 0;
}

int main(int argc, char *argv[]) {
  int a = 10;
  int b = 20;
  cout << "a = " << a << "; b = " << b << endl;
  cout << "Call zeroBoth(a,b): " << endl;
  zeroBoth(a, b);
  cout << "After: a = " << a << "; b = " << b << endl;
  return 0;
}

