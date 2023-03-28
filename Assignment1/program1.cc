// Copyright 2022 CSCE 240-001
// Written by Anna Phan
// Convert a numeric value expressed in a base between 2 and 9,
// inclusive, to the base 10 expression of that value.

#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;
int main() {
  int num, base, rem;
  int pro = 0;
  int dec = 0;
  cin >> num >> base;
  if (base >= 2 && base <= 9) {
    // Checks if the base is 2
    if (base == 2) {
    base -= 1;
        while (num != 0) {  // While there is a number, keep running
        rem = num % 10;
        if (rem == 0 || rem == 1) {  // Checks if the numbers are 0s or 1s
          dec += rem * base;
          num = num / 10;
          base *= 2;
        } else {  // If the numbers are not 0s or 1s, then they go here
          cout << "Invalid Digit(s) In Number" << endl;
          return 0;  // breaks the loop
        }
      }
      cout << dec << endl;  // prints out the decimal number
      } else {  // This is where the other bases go
        while (num != 0) {
          rem = num % 10;
          if (rem <= 9) {  // makes sure that the number are not double digits
            dec += rem * pow(base, pro++);
            num = num / 10;
          } else {
            cout << "Invalid Digit(s) In Number" << endl;
            return 0;  // breaks the loop
          }
        }
        cout << dec << endl;
      }
    } else {
      cout << "Base Not Accepted" << endl;
    }
  return 0;
}
