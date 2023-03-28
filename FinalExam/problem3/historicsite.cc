// Copyright 2022 CSCE 240
// implement the member functions for the HistoricSite class in this file

#include<geographiclocation.h>
#include<historicsite.h>
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

namespace csce240_sites {

  HistoricSite::HistoricSite(string descript, int y, double latitude,
                double longitude) : GeographicLocation(latitude, longitude) {
    description_ = descript;
    year_ = y;
  }

  void HistoricSite::SetDescription(string description) {
    description_ = description;
  }

  void HistoricSite::SetYearEstablished(int year) {
    year_ = year;
  }

  // Something wrong
  void HistoricSite::Print() const {
    cout << "Historic Site"<< "\nEstablished: " << year_ << "\nLocation: ";
    GeographicLocation::Print();
    cout << "\nDescription: " << description_;
  }

}  // namespace csce240_sites
