/*
 * Problem1.cpp
 *
 *  Problem 2 (2darray.cpp): Write code that will fill the array a (declared below)
 *  with numbers typed in at the key- board. The numbers will be input five per line,
 *  on four lines (although your solution need not depend on how the input numbers are divided into lines).
 */

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  const int ROW = 4;
  const int COLLUM = 5;
  // delare the array keep
  int a[4][5];
  cout << "Enter number five per line, on four lines: " << endl;
  // Read from input
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      // Read from the line
      cin >> a[i][j];
    }
  }

  // output:
  cout << "Array contain:" << endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      // Read from the line
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}

