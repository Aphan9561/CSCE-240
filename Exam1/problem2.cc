// Copyright 2022 CSCE240
// Written by Anna Phan
#include<iostream>
#include<fstream>
#include<string>
using std::cout;
using std::endl;

int main() {
  std::string item_Code, small_Code, large_Code;
  int item_Qu_Pairs, small_Qu_Pair, large_Qu_Pair, sum = 0;
  // reads the txt file
  std::ifstream my_input_file("inventory.txt");
  my_input_file >> item_Code >> item_Qu_Pairs;
  // assigning the varaibles
  small_Code = item_Code;
  small_Qu_Pair = item_Qu_Pairs;
  large_Code = item_Code;
  large_Qu_Pair = item_Qu_Pairs;
  // puts the files into a while loop until the loop ends or has a bad input
  while (my_input_file.good()) {
    // finding the smallest item in the txt file
    if (small_Qu_Pair > item_Qu_Pairs) {
      small_Qu_Pair = item_Qu_Pairs;
      small_Code = item_Code;
    }
    // finding the largest item in the text file
    if (large_Qu_Pair < item_Qu_Pairs) {
      large_Qu_Pair = item_Qu_Pairs;
      large_Code = item_Code;
    }
    // finding the total sum of the inventory
    sum += item_Qu_Pairs;
    item_Qu_Pairs = 0;
    my_input_file >> item_Code >> item_Qu_Pairs;
  }
  // prints the results
  cout << "Highest inventory item: " << large_Code << " quantity: "
       << large_Qu_Pair << endl;
  cout << "Lowest inventory item: " << small_Code << " quantity: "
       << small_Qu_Pair << endl;
  cout << "Total inventory: " << sum << endl;
  my_input_file.close();
  return 0;
}
