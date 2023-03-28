// Copyright 2022 CSCE 240
// implement the member functions for the GeographicLocation class in this file
#include<geographiclocation.h>

#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

namespace csce240_sites {

GeographicLocation::GeographicLocation(double Lat, double Lon) {
  SetLatitude(Lat);
  SetLongitude(Lon);
}

void GeographicLocation::SetLatitude(double latitude) {
  if (latitude >= -90 && latitude <= 90) {
    latitude_ = latitude;
  } else {
    latitude_ = 0;
  }
}

void GeographicLocation::SetLongitude(double longitude) {
  if (longitude >= -180 && longitude <= 180) {
    longitude_ = longitude;
  } else {
    longitude_ = 0;
  }
}

void GeographicLocation::Print() const {
  string NS;
  string EW;
  double Lat = 0, Long = 0;
  if (latitude_ < 0) {
    Lat = abs(latitude_);
    NS = "S";
  } else {
    Lat = latitude_;
    NS = "N";
  }

  if (longitude_ < 0) {
    Long = abs(longitude_);
    EW = "W";
  } else {
    Long = longitude_;
    EW = "E";
  }

  cout << Lat << "\u00B0" << " " << NS << ", " << Long << "\u00B0" << " " << EW;
}

}  // namespace csce240_sites
