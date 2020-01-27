/*
 * Problem4_Inflation.cpp
 *
 *  It is difficult to make a budget that spans several years, because prices are not stable.
 *  If your company needs 200 pencils per year, you cannot simply use this year's price as
 *  the cost of pencils two years from now. Because of inflation the cost is likely to be higher
 *  than it is today. Write a program to gauge the expected cost of an item in a specified number
 *  of years. The program asks for the cost of the item, the number of years from now that the item will
 *  be purchased, and the rate of inflation. The program then output the estimated cost of the item
 *  after the specified period. Have the user enter the inflation rate as a percentage, such as
 *  5.6 (percent). Your program should then convert the percentage to a faction, such as: 0.056, and
 *  should use a loop to estimate the price adjusted for inflation.
 */

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  double currentlyCost = 0.0;
  double inflationRate = 0.0;
  int yearNumber;

  // Read input
  cout << "The cost of the item: ";
  cin >> currentlyCost;
  cout << "The number of years from now that the item will be purchased: ";
  cin >> yearNumber;
  cout << "The rate of inflation: ";
  cin >> inflationRate;

  // Change inflation rate to number
  inflationRate = inflationRate / 100;

  double nextCost = currentlyCost;

  // Use loop to calculate the next code for year
  for (int i = 0; i < yearNumber; i++) {
    nextCost += nextCost * inflationRate;
  }

  // output
  cout << "The esimated cost of the item after " << yearNumber << " is: $"
       << nextCost << endl;

  return 0;
}
