// Copyright CSCE240 2022
// Written by Anna Phan
#include<taxid.h>
#include<string>
using std::string;
#include<iostream>

// initialize the mask to "XXXXX####"
string TaxId::MaskId = "XXXXX####";
// implement the TaxId class' member functions
TaxId::TaxId(string Id) {
  data_member = "000000000";
  SetId(Id);
}
void TaxId::SetMask(string Id) {
  int length = 0;
  if (Id.length() == 9) {
    for (int i = 0; i < Id.length(); i++) {
      if (Id[i] == '#' || Id[i] == 'X') {
        length++;
      }
    }
  }
  if (length == 9) {
    MaskId = Id;
  }
}
string TaxId::GetMask() {
  return MaskId;
}
void TaxId::SetId(string Id) {
  int num = 0;
  int dashes = 0;
  int len = Id.length();
  if (len == 9) {
    for (int i = 0 ; i < 11 ; i++) {
      if (Id[i] == '0' || Id[i] == '1' || Id[i] == '2' || Id[i] == '3'
        || Id[i] == '4' || Id[i] == '5' || Id[i] == '6' || Id[i] == '7'
        || Id[i] == '8' || Id[i] == '9' ) {
        num++;  // Counting numbers
      }
    }
  } else if (len == 11) {
    num = 0;
    dashes = 0;
    for (int i =0 ; i <= 11 ; i++) {
      if (Id[i] == '0' || Id[i] == '1' || Id[i] == '2' || Id[i] == '3'
        || Id[i] == '4' || Id[i] == '5' || Id[i] == '6' || Id[i] == '7'
        || Id[i] == '8' || Id[i] == '9' ) {
        num++;  // Counting numbers
      } else if (i == 3 || i == 6) {
        if (Id[i] == '-') {
          dashes++;  // Counting dashes
        }
      }
    }
  }
  if (num == 9 && dashes == 0 && len == 9) {
    data_member = Id;
  } else if (num == 9 && dashes == 2) {
    int i = 0;
    for (int j = 0; j <= 11; j++) {
      if (Id[j] != '-') {  // taking out the dashes
        data_member[i] = Id[j];
        i++;
      }
    }
  }
}
string TaxId::GetId() const {
  string Mask_data = GetMask();
  for (int i =0; i < data_member.length(); i++) {
    if (MaskId[i] == '#') {
      Mask_data[i] = data_member[i];
    }
  }
  return Mask_data;
}
