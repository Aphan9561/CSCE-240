// Copyright 2022 CSCE 240
#ifndef _HISTORICSITE_H_
#define _HISTORICSITE_H_

#include<geographiclocation.h>
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

namespace csce240_sites {
// Derive the HistoricSites class from the GeographicLocation class in this
// file. Place it in the namespace csce240_sites
class HistoricSite : public GeographicLocation{
 public:
// Member functions:
// - An explicit constructor that takes a string for the description, with a
//   default argument of "", an int for the year established with a default
//   argument of 0, a double for the latitude with a default argument of 0,
//   and a double for the longitude with a default argument of 0.
  explicit HistoricSite(string descript = "", int y = 0, double latitude = 0,
                      double longitude = 0);
// - A virtual destructor - the body of the function should be empty {}
  virtual ~HistoricSite() {}
// - SetDescription that takes a string for the historic site's description.
//   Any string should be accepted.
void SetDescription(string description);
// - SetYearEstablished that takes an int argument for the year the historic
//   site was established. Any int should be accepted.
void SetYearEstablished(int year);
// - GetDescription should return a copy of the value of the description
//   data member
string GetDescription() { return description_; }
// - GetYearEstablished should return a copy of the value of the year
//   established data member
int GetYearEstablished() { return year_; }
// - A virtual Print function that displays the Historic Site as
//     Historic Site
//     Established: (the value of the year established data member)
//     Location: (the lat/long as printed in the GeographicLocation class)
//     Description: (the value of the description data member)
//   example expected output for the print function is provided in
//   /output/correcthsprint.txt
  virtual void Print() const;
// The HistoricSites class should have two private data members:
// a string for the description of the site and an int for the year the
// site was established.

 private:
  string description_;
  int year_;
};

}  // namespace csce240_sites

#endif  // _HISTORICSITE_H_
