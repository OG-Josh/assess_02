/*
 * Problem1.cpp
 *
 *  Problem 4 (salestax.cpp): Implement a function called addTax.
 *  The function addTax has two formal parameters: taxRate, which is the amount
 *  of sales tax expressed as a percent; and cost, which is the cost
 *  of an item before tax. The function returns the value (float) of cost so that it includes sales tax.
 */

#include <iostream>
using namespace std;

float addTax(float taxRate, float cost) {
  return (cost + cost * (taxRate / 100));
}

int main(int argc, char *argv[]) {

  float priceBeforeTax = 123.45;
  float taxRate = 6.78;
  cout << "Price before tax: $" << priceBeforeTax << endl;
  cout << "Sales tax expressed as a percent: " << taxRate << "%" << endl;
  float total = addTax(taxRate, priceBeforeTax);
  cout << "Price includes sales tax: %" << total << endl;
  return 0;
}

