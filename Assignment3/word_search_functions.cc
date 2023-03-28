// Copyright CSCE240 2022
// Written by Anna Phan
#include<word_search_functions.h>
#include<iostream>
#include<string>
#include<fstream>
using std::string;
using std::cout;
using std::endl;

bool ReadWordSearch(string file_name, char word_search[][kSize]) {
  std::ifstream my_input_file(file_name);
  if (!my_input_file.is_open()) {
    return false;
  }
  for (int i = 0; i < kSize; i++) {
    for (int j = 0; j < kSize; j++) {
      my_input_file >> word_search[i][j];
    }
  }
  return true;
}
void PrintWordSearch(const char w_s[][kSize]) {
  for (int i = 0; i < kSize; i++) {
    for (int j = 0; j < kSize; j++) {
      cout << w_s[i][j] << " ";
    }
    cout << endl;
  }
}
// Left-to-Right
Position FindWordRight(const char w_s[][kSize], string to_find) {
  Position p = {-1, -1};
  int counter = 0;
  int len = to_find.length();
  for (int i = 0; i < kSize; i++) {
    for (int j = 0; j < kSize; j++) {
      counter = 0;
      for (int k = 0; k < len; k++) {
        if ((j+k) < kSize) {
          if (w_s[i][j+k] == to_find[k]) {
            counter++;
          }
          if (counter == len) {
            p.row = i;
            p.col = j;
            return p;
          }
        }
      }
    }
  }
  return p;
}
// Right-to-Left
Position FindWordLeft(const char w_s[][kSize], string to_find) {
  Position p = {-1, -1};
  int counter = 0;
  int len = to_find.length();
  for (int i = 0; i < kSize; i++) {
    for (int j = 0; j < kSize; j++) {
      counter = 0;
      for (int k = 0; k < len; k++) {
        if ((j+k) >= 0) {
          if (w_s[i][j-k] == to_find[k]) {
            counter++;
          }
          if (counter == len) {
            p.row = i;
            p.col = j;
            return p;
          }
        }
      }
    }
  }
  return p;
}
// Top-to-Bottom
Position FindWordDown(const char w_s[][kSize], string to_find) {
  Position p = {-1, -1};
  int counter = 0;
  int len = to_find.length();
  for (int i = 0; i < kSize; i++) {
    for (int j = 0; j < kSize; j++) {
      counter = 0;
      for (int k = 0; k < len; k++) {
        if ((i+k) < kSize) {
          if (w_s[i+k][j] == to_find[k]) {
            counter++;
          }
          if (counter == len) {
            p.row = i;
            p.col = j;
            return p;
          }
        }
      }
    }
  }
  return p;
}
// Bottom-to-Top
Position FindWordUp(const char w_s[][kSize], string to_find) {
  Position p = {-1, -1};
  int counter = 0;
  int len = to_find.length();
  for (int i = 0; i < kSize; i++) {
    for (int j = 0; j < kSize; j++) {
      counter = 0;
      for (int k = 0; k < len; k++) {
        if ((i+k) >= 0) {
          if (w_s[i-k][j] == to_find[k]) {
            counter++;
          }
          if (counter == len) {
            p.row = i;
            p.col = j;
            return p;
          }
        }
      }
    }
  }
  return p;
}
// Diagonal Left-to-Right
Position FindWordDiagonal(const char w_s[][kSize], string to_find) {
  Position p = {-1, -1};
  int counter = 0;
  int len = to_find.length();
  for (int i = 0; i < kSize; i++) {
    for (int j = 0; j < kSize; j++) {
      counter = 0;
      for (int k = 0; k < len; k++) {
        if ((j+k) < kSize && (i+k) < kSize) {
          if (w_s[i+k][j+k] == to_find[k]) {
            counter++;
          }
          if (counter == len) {
            p.row = i;
            p.col = j;
            return p;
          }
        }
      }
    }
  }
  return p;
}
