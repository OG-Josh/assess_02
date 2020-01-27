/*
 * Problem1.cpp
 *
 * Problem 1 (intarray.cpp): Write a program that will read up to ten nonnegative
 * integers into an array called numberArray and then write the integers back to
 * the screen (console output). For this exercise you need not use any functions.
 */

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  const int SIZE_ARRAY = 10;
  int numberArray[SIZE_ARRAY];
  for (int i = 0; i < SIZE_ARRAY; i++) {
    // Flag when user enter non-negative number
    bool validInput = false;
    int input;
    while (validInput == false) {
      cout << "Read number at index " << i << ": ";
      cin >> input;
      if (input >= 0) {
        numberArray[i] = input;
        validInput = true;
      } else {
        cout << "Please enter the non-neggative number. Try again!" << endl;
      }
    }
  }

  // Print output
  cout << "numberArray:";
  for (int i = 0; i < SIZE_ARRAY; i++) {
    cout << ' ' << numberArray[i];
  }
  cout << endl;

  return 0;
}

