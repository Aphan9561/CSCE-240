// Copyright 2022 CSCE240
// Written by Anna Phan
#include"operator_functions.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<fstream>

int main() {
  double num, num2;
  double ans = 0.0;
  char oper;
  std::ifstream my_input_file("arithmetic_expressions.txt");
  my_input_file >> num >> oper >> num2;
  // execute this loop until we get bad input or reach the end of the file
  while (my_input_file.good()) {
    // Check for the correct operators
    if (IsArithmeticOperator(oper)) {
      // Check if the function can run
      if (Compute(num, oper, num2, ans)) {
        cout << num << OperatorToWords(oper) << num2 << " equals " << ans
             << endl;
          } else {
        // Will print out if Compute is false
            cout << "Could not compute " << num << OperatorToWords(oper)
                 << num2 << endl;
          }
    } else {  // Will print out if the operator incorrect or unrecognizable
      cout << "Unrecognized operation " << oper << endl;
    }
    my_input_file >> num >> oper >> num2;
  }
  my_input_file.close();  // close the file
  return 0;
}
