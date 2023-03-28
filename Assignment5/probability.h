// Copyright CSCE240 2022
// Written By Anna Phan
#ifndef _PROBABILITY_H_
#define _PROBABILITY_H_

#include"fraction.h"
#include<string>

namespace csce240_program5 {

// Define the Probability class as a child of the Fraction class
// Probabilities are always between 0 and 1, inclusive
// Invalid operations should leave the object unchanged.
class Probability : public Fraction {
 public:
  // create a constructor should take two integers and create a probability,
  // defaulting the numerator to 0 and the denominator to 1 if they are not
  // sent as arguments - invalid initialization should result in the
  // probability being 0
  explicit Probability(int n = 0, int d = 1);
  // create a constructor that takes a Fraction and creates a probability
  // if the fraction is not a valid probability, the probability should
  // be set to 0
  explicit Probability(const Fraction& frac);
  // Redefine any of the inherited functions that need to be modified
  // in order to work properly for a Probability.
  void SetNum(int Num);
  void SetDen(int Den);
  void Multiply(int Num);
  // OddsInFavor function should return a string for the odds that correspond
  // to the probability. For example, the probability 2/5 is equivalent to
  // the odds in favor of 2:3
  string OddsInFavor() const;
};

}  // end namespace csce240_program5

#endif  // _PROBABILITY_H_
