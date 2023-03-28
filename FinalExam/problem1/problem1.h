// Copyright 2022 CSCE 240
#ifndef _PROBLEM1_H_
#define _PROBLEM1_H_

#include<string>
using std::string;

template<class T>

void FindAndReplace(T * values, int size, T find, T replace) {
  for (int i = 0; i < size; i++) {
    if (values[i] == find) {
      values[i] = replace;
    }
  }
}

#endif  // _PROBLEM1_H_
