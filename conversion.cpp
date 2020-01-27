/*
 * Problem1.cpp
 *
 *  Problem 5 (conversion.cpp): Write a program that will read in a length
 *  in feet and inches and output the equivalent length in meters and centimeters.
 *  Use at least three functions: one for user input, one or more for calculating,
 *  and one for output(console). Include a loop that lets the user repeat this computation for
 *  new input values until the user says he or she wants to end the program (user has to type exit).
 *  There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.
 */

#include <iostream>
using namespace std;

void readInput(int& feet, double &inches) {
  cout << "Feet: ";
  cin >> feet;
  cout << "Inches: ";
  cin >> inches;
}

void writeOutput(int meters, double centimeters) {
  cout << "Meters: " << meters << endl;
  cout << "Centimeters: " << centimeters << endl;
}

void calculating(int feet, double inches, int& meters, double& centimeters) {
  double combinedMeters = (feet + (inches / 12)) * 0.3048;
  meters = (int) (combinedMeters);
  centimeters = (combinedMeters - meters) * 100;
}
int main(int argc, char *argv[]) {

  int feet = 0;
  double inches = 0.0;

  int meters = 0;
  double centimeters = 0.0;
  readInput(feet, inches);
  calculating(feet, inches, meters, centimeters);
  writeOutput(meters, centimeters);
  return 0;
}

