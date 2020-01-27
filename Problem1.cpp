/*
 * Problem1_Cereal.cpp
 *
 *  A metric ton is 35273.92 ounces.
 *  Write a program that will read the weight (console input) of
 *  a package of breakfast cereal in ounces and output the weight
 *  in metric tons as well as the number of boxes needed to yield
 *  one metric ton of cereal
 */

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  const double METRIC_TON = 35273.92;
  double weightInOunces = 0.0;
  cout << "The weight of a package of breakfast ceral in ounces: ";
  cin >> weightInOunces;

  // Do calculate
  double weightInTons = weightInOunces / METRIC_TON;
  int boxesNeeded = 0;
  boxesNeeded = (double) METRIC_TON / weightInOunces;

  // If the boxesNeeded is zero. But have a small weight need to yield. Increase box to 1
  if (1.0 > (weightInTons * boxesNeeded)) {
    boxesNeeded++;
  }
  // Print output
  cout << "Weight in metric tons: " << weightInTons << endl;
  cout << "The number of boxes needed to yield one metric ton of cereal: "
       << boxesNeeded << endl;

  return 0;
}

