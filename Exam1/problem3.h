// Copyright 2022 CSCE240
// Written by Anna Phan
#ifndef _PROBLEM3_H_
#define _PROBLEM3_H_
#include<string>
#include<iostream>

// the function will take the number given and return the reverse of that number
int Reverse(int num);

// the function will take the given number and the number of digits wanted
// to be reverse and return the reversed digits.
int Reverse(int num, int reValue);

// the function will return the amount of digits that the two values have the
// in common
int MatchWithReversedDigits(int num, int numValue);

#endif  // _PROBLEM3_H_
