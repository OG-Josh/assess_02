/*
 * Problem3_Employeepay.cpp
 *
 *  An employee is paid at a rate of $16.00 per hour for regular hours worked in a week.
 *  Any hours over that are paid at the overtime rate of one and one-half times that.
 *  From the worker's gross pay, 6% is withheld for Social Security tax, 14% is withheld for
 *  federal income tax, 5% is withheld for state income tax,and $10 per week is withheld
 *  for medical insurance. Write a program that will read in the number of hours worked
 *  in a week as input and that will then output the worker's gross pay, each withholding
 *  amount, and the net take-home pay for the week
 */

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {

  const double HOURSLY_RATE = 16.00;
  const int REGULAR_HOURS = 40;
  const double SOCIAL_SECURITY_TAX = 0.06;
  const double FEDERAL_INCOME_TAX = 0.14;
  const double STATE_INCOME_TAX = 0.05;
  const double MEDICAL_INSURANCE = 10.00;

  int hoursWorker = 0;
  double overTime = 0;
  cout << "The number of hours worked in a week: ";
  cin >> hoursWorker;
  if (hoursWorker > REGULAR_HOURS) {
    // Calculate the over time
    overTime = hoursWorker - REGULAR_HOURS;
  }

  // Calculate the salary
  double grossPayment = ((double) (hoursWorker - overTime)
      * (double) HOURSLY_RATE)
      + ((double) overTime * (double) (HOURSLY_RATE * 1.5));
  double withHolding = (grossPayment
      * (SOCIAL_SECURITY_TAX + FEDERAL_INCOME_TAX + STATE_INCOME_TAX))
      + MEDICAL_INSURANCE;

  double netTakeHome = grossPayment - withHolding;
  // Print output
  cout << "Gross pay = $" << grossPayment << endl;
  cout << "With holding = $" << withHolding << endl;
  cout << "The net take-home pay for the week = $" << netTakeHome << endl;

  return 0;
}

