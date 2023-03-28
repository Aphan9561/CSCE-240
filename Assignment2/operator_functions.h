// Copyright 2022 CSCE240
#ifndef _OPERATOR_FUNCTIONS_H_
#define _OPERATOR_FUNCTIONS_H_
#include<string>
#include<iostream>

// function will take a double arugment and returns true if
// the value truncated as an integer is equal to the original value, and false
// otherwise.
bool IsInteger(double num);

// function will take the operation and return true if the operation is a valid
// arithmetic operators (+, -, *, /, %).
bool IsArithmeticOperator(char oper);

// function will take a character argument and returns the following
// corresponding string if the character is one of the
// five arithmetic operators: plus, minus, times, divided by, modulo.
std::string OperatorToWords(char oper);

// The function should compute the value of the operation left operand
// operator right operand and place the result in the fourth parameter
bool Compute(double num, char oper, double num2, double& ans);

#endif  // _OPERATOR_FUNCTIONS_H_
