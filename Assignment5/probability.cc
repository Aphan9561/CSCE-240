// Copyright CSCE240 2022
// Written By Anna Phan
// implement Probability class functionality here
#include"fraction.h"
#include"probability.h"
#include<string>

namespace csce240_program5 {

  Probability::Probability(int n, int d) : Fraction(n, d) {
    if (n > 0 && d > 0 && n <= d) {
      SetNum(n);
      SetDen(d);
    } else {
      SetNum(0);
      SetDen(1);
    }
  }

  Probability::Probability(const Fraction& fraction) {
    if (fraction.GetNum() > 0 && fraction.GetDen() > 0 &&
        fraction.GetNum() <= fraction.GetDen()) {
      Fraction::SetNum(fraction.GetNum());
      Fraction::SetDen(fraction.GetDen());
    } else {
      Fraction::SetNum(0);
      Fraction::SetDen(1);
    }
  }

  void Probability::SetNum(int Num) {
    Fraction::SetNum(Num);
  }

  void Probability::SetDen(int Den) {
    Fraction::SetDen(Den);
  }

  void Probability::Multiply(int Num) {
    if (Num >= 0) {
      int numer = Fraction::GetNum() * Num;
      if (numer <= Fraction::GetDen() && Fraction::GetNum() > 0 &&
          Fraction::GetDen() > 0) {
        Fraction::SetNum(numer);
      }
    }
  }

  string Probability::OddsInFavor() const {
    string left = std::to_string(Fraction::GetNum());
    string right = std::to_string(Fraction::GetDen() - Fraction::GetNum());
    return left + ":" + right;
  }
}  // end namespace csce240_program5
