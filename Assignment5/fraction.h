// Copyright CSCE240 2022
// Written By Anna Phan
#ifndef _FRACTION_H_
#define _FRACTION_H_
#include<string>
using std::string;

namespace csce240_program5 {

// define the fraction class where a valid fraction is an integer
// divided by a non-zero integer
class Fraction {
 public:
  // constructor should set the numerator and denominator - defaulting the
  // numerator to 0 and the denomin ator to 1 if they are not sent as arguments
  explicit Fraction(int n = 0, int d = 1);
  // overload the == operator. This should return if the value of the two
  // compared fractions are equal, and false otherwise. For example,
  // 3/6 == 4/8 is TRUE.
  // note: do not use real division to compare decimal values as rounding
  //       errors can give incorrect results
  bool operator==(const Fraction& frac) const;
  // ToDecimal should return the decimal equivalent of the fraction.
  // For example, if the fraction is 1/2, ToDecimal should return 0.5
  double ToDecimal() const;
  // Multiply should take an integer argument and multiply the fraction
  // by that integer
  void Multiply(int Num);
  // overload the * operator to multiply two fractions and return the resulting
  // Fraction object.
  Fraction operator*(const Fraction& frac) const;
  // Divide should take an integer argument and update the object so that
  // it has been divided by that quantity
  void Divide(int Num);
  // ToString should return the fraction in the format "numerator/denominator"
  string ToString() const;
  // add accessor and mutator functions
  void SetNum(int Num);
  void SetDen(int Den);
  int GetNum() const { return numerator_; }
  int GetDen() const { return denominator_; }

 private:
  // add the two integer data members here
  int numerator_;
  int denominator_;
};

}  // end namespace csce240_program5

#endif  // _FRACTION_H_
