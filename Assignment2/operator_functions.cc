//  Copyright 2022
#include"operator_functions.h"
#include<string>
#include<iostream>

// Function checks if the number is an integer
bool IsInteger(double num) {
  int whole = num;
  if (whole == num)
    return true;
  else
    return false;
}

// Function checks is the operator is valid
bool IsArithmeticOperator(char oper) {
  return oper =='+' || oper == '-' || oper == '*' || oper == '/' || oper == '%';
}

// Functions changes the operator to its word format
std::string OperatorToWords(char oper) {
  if (oper == '+') {
    return " plus ";
  } else if (oper =='-') {
    return " minus ";
  } else if (oper == '*') {
    return " times ";
  } else if (oper == '/') {
    return " divided by ";
  } else if (oper == '%') {
    return " modulo ";
  } else {
    return " ?? ";
  }
}

// The function will compute the vlaue of the operator.
bool Compute(double num, char oper, double num2, double& ans) {
  ans = 0.0;
  if (oper == '+') {
    ans = (num + num2);
    return (num + num2);
  } else if (oper =='-') {
    ans = (num - num2);
    return true && ans;
  } else if (oper == '*') {
    ans = (num * num2);
    return true && ans;
  } else if (oper == '/') {
    if (num2 == 0) {
      return false;
    } else {
      ans = (num / num2);
      return true && ans;
    }
  } else if (oper == '%') {
    // Checks if the numbers are whole
    if (IsInteger(num) && IsInteger(num2)) {
      int number = num;
      int number2 =  num2;
      ans = (number % number2);
      return true && ans;
     } else {
      return false;
    }
  } else {
      return false;
    }
}
