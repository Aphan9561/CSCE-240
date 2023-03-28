// Copyright CSCE240 2022
// Written By Anna Phan
#include<employee.h>
#include<taxid.h>
#include<string>
using std::string;
Employee::Employee() : taxId("999999999") {
  hourPerWeek = 40.0;
  payType = 2;
}
Employee::Employee(string Id, int payType, double hrPerWeek) {
  SetPayType(payType);
  SetHoursPerWeek(hrPerWeek);
  SetTaxId(Id);
}
// checks the pay type based on the number inputed
void Employee::SetPayType(int payT) {
  if (payT == 1 || payT == 2 || payT == 3) {
    payType = payT;
  }
}
// Checks the kind of pay from 1 to 3 and turns it into the corrisponding word
void Employee::SetPayType(string payT) {
  if (payT == "salaried") {
    payType = 1;
  } else if (payT == "hourly") {
    payType = 2;
  } else if (payT == "contract") {
    payType = 3;
  }
}
string Employee::GetPayType() const {
  if (payType == 1) {
    return "salaried";
  } else if (payType == 2) {
    return "hourly";
  } else if (payType == 3) {
    return "contract";
  }
}
// Checks if the hour pay is between 0 and 40
void Employee::SetHoursPerWeek(double hourPay) {
  if (hourPay >= 0 && hourPay <= 40) {
    hourPerWeek = hourPay;
  }
}
double Employee::GetHoursPerWeek() const {
  return hourPerWeek;
}
// Checks if Id is vaild
void Employee::SetTaxId(string Id) {
  taxId.SetId(Id);
}
string Employee::GetTaxId() const {
  string Id = taxId.GetId();
  int len = Id.length();
  for (int i = 0; i < len - 4; i++)  {
    Id[i] = 'X';
  }
  return Id;
}
