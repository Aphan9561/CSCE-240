// Copyright CSCE240 2022
// Written By Anna Phan
#include"fraction.h"
#include<string>
using std::string;
// implement Fraction class functionality here

namespace csce240_program5 {

  Fraction::Fraction(int n, int d) : numerator_(0), denominator_(1) {
    SetNum(n);
    SetDen(d);
  }

  bool Fraction::operator==(const Fraction& frac) const {
    return denominator_*frac.numerator_ == numerator_*frac.denominator_;
  }

  double Fraction::ToDecimal() const {
    double num = numerator_;
    double den = denominator_;
    return num/den;
  }

  void Fraction::Multiply(int Num) {
    if (Num < 0) {
      int newNum = Num * -1;
      numerator_ *= -1;
      denominator_ /= newNum;
    } else if (Num > 0) {
      numerator_ *= Num;
    } else {
      numerator_ = 0;
      denominator_ = 1;
    }
  }

  Fraction Fraction::operator*(const Fraction& frac) const {
    return Fraction(numerator_*frac.numerator_, denominator_*frac.denominator_);
  }

  void Fraction::Divide(int Num) {
    if (Num < 0) {
      int newNum = Num * -1;
      denominator_ *= newNum;
      numerator_ *= -1;
    } else if (Num > 0) {
      denominator_ *= Num;
    }
  }

  string Fraction::ToString() const {
    string num = std::to_string(numerator_);
    string den = std::to_string(denominator_);
    return num + "/" + den;
  }

  void Fraction::SetNum(int Num) {
    numerator_ = Num;
  }

  void Fraction::SetDen(int Den) {
    if (Den != 0) {
      denominator_ = Den;
    }
  }
}    // end namespace csce240_program5
