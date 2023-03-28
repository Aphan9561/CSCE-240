// Copyright 2022 CSCE240
// Written by Anna Phan

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int num1, num2, rem, neg, num3 = 0;
  cin >> num1 >> num2;  // geting the input from user
  int temp1 = num1;
  int temp2 = num2;
  // changing the negative number into a positve one
  if (temp1 < 0) {
    neg = temp1;
    neg *= -1;
    temp1 = neg;
  }
  if (temp2 < 0) {
    neg = temp2;
    neg *= -1;
    temp2 = neg;
  }
  // take the larger number to do the remainder and see if they are a multiple
  // of each other.
  if (temp1 > temp2) {
    rem = (temp1 % temp2);
    num3 = num1 / num2;
    if (rem == 0) {
      cout << num1 << " is " << num3 << " times " << num2 << endl;
    } else {
      cout << num1 << " is not a multiple of " << num2 << endl;
    }
  } else {
    rem = (temp2 % temp1);
    num3 = (num2 / num1);
    if (rem == 0) {
      cout << num2 << " is " << num3 << " times " << num1 << endl;
    } else {
      cout << num2 << " is not a multiple of " << num1 << endl;
    }
  }
  return 0;
}
