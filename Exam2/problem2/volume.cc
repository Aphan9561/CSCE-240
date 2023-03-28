// Copyright 2022 CSCE240
// Written by Anna Phan
// Exam 2 problem 2 implement the Volume class
#include<volume.h>
#include<string>
using std::string;
#include<iostream>
using std::ostream;
Volume::Volume(double vq, string vu) {
  SetQuantity(vq);
  SetMeasure(vu);
}
double Volume::GetQuantity() const {
  return vol_quantity;
}
string Volume::GetMeasure() const {
  return vol_unit;
}
void Volume::SetQuantity(double quantity) {
  // checks if the number is positive
  if (quantity >= 0) {
    vol_quantity = quantity;
  }
}
void Volume::SetMeasure(string unit) {
  // Checks if the units is one of the units listed below
  if (unit == "ounces" || unit == "tablespoons" || unit == "teaspoons"
    || unit == "cups") {
    vol_unit = unit;
  }
}
void Volume::Convert(string new_unit) {
  // convert the units to the one that is needed
  if (vol_unit == "ounces") {
    if (new_unit == "tablespoons") {
      vol_quantity = (vol_quantity * 2);
      vol_unit = new_unit;
    } else if (new_unit == "teaspoons") {
      vol_quantity = (vol_quantity * 6);
      vol_unit = new_unit;
    } else if (new_unit == "cups") {
      vol_quantity = (vol_quantity / 8);
      vol_unit = new_unit;
    }
  } else if (vol_unit == "tablespoons") {
    if (new_unit == "ounces") {
      vol_quantity = (vol_quantity / 2);
      vol_unit = new_unit;
    } else if (new_unit == "teaspoons") {
      vol_quantity = (vol_quantity * 3);
      vol_unit = new_unit;
    } else if (new_unit == "cups") {
      vol_quantity = (vol_quantity / 16);
      vol_unit = new_unit;
    }
  } else if (vol_unit == "teaspoons") {
    if (new_unit == "ounces") {
      vol_quantity = (vol_quantity / 6);
      vol_unit = new_unit;
    } else if (new_unit == "tablespoons") {
      vol_quantity = (vol_quantity / 3);
      vol_unit = new_unit;
    } else if (new_unit == "cups") {
      vol_quantity = (vol_quantity / 48);
      vol_unit = new_unit;
    }
  } else if (vol_unit == "cups") {
    if (new_unit == "ounces") {
      vol_quantity = (vol_quantity * 8);
      vol_unit = new_unit;
    } else if (new_unit == "tablespoons") {
      vol_quantity = (vol_quantity * 16);
      vol_unit = new_unit;
    } else if (new_unit == "teaspoons") {
      vol_quantity = (vol_quantity * 48);
      vol_unit = new_unit;
    }
  }
}
void Volume::Add(Volume new_vol) {
  // will convert the new_vol's unit to be the same as the previous unit
  // so they can be added
  new_vol.Convert(vol_unit);
  vol_quantity = vol_quantity + new_vol.vol_quantity;
}
