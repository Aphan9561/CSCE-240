// Copyright 2022 CSCE240
// Written by Anna Phan
#include"problem3.h"
#include<iostream>
#include<cmath>
using std::cout;
using std::endl;
// Reverses the number given
int Reverse(int num) {
  int rem, revNum = 0;
  while (num != 0) {
    rem = num % 10;
    revNum = revNum * 10 + rem;
    num /= 10;
  }
  return revNum;
}
// Reverses the amount of digits is enter at reValue
int Reverse(int num, int reValue) {
  int rem, revNum = 0;
  if (reValue > 0) {
    int pow10 = pow(10, reValue);
    int temp = num/pow10;  // Keeps the digits that aren't being reverses
    while (reValue > 0) {
      reValue--;
      rem = num % 10;
      revNum = revNum * 10 + rem;
      num /= 10;
    }
    int ans = (temp * pow10) + revNum;  // adds the reversed number
    return ans;
  } else {
    return num;
  }
}
// figures out how many time the second number is reverses
int MatchWithReversedDigits(int num1, int num2) {
  int total = 0;
  int orig = num1;  // have a temp place for num1
  if (num1 != num2) {
    while (orig != 0 && orig != num2) {
      orig = Reverse(num1, total);
      if (orig == num2) {
        break;
      }
      total++;  // counts how many times it takes to make num1 to equal num2
    }
    if (orig == num2) {
      return total;
    } else {  // returns -1 if the number are different
      return -1;
    }
  } else {  // returns 0 if the numbers are the smae
    return 0;
  }
}
