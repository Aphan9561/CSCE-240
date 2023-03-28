// Copyright 2022 CSCE240
// Written by Anna Phan
// Exam 2 problem1.cc
#include"problem1.h"

// implement the Remove function here
void Remove(int an_array[], int array_size, int to_remove) {
  int index = -1;
  int count = 0;  // counts the amount of time to_remove shows up
  for (int j = 0; j < array_size; j++) {
    for (int i = 0; i < array_size; i++) {
      // finds to_remove
      if (an_array[i] == to_remove) {
        index = i;
        count++;
        break;
      }
    }
    // will shift the numbers if to_remove is found
    if (index != -1) {
      for (int i = index; i < array_size; i++) {
        an_array[i] = an_array[i+1];
      }
    }
    // resets index to restart the loop
    index = -1;
  }
  // len will be the number of zeros to add at the end
  int len = array_size - count;
  // adding the zeros
  for (int i = len; i < array_size; i++) {
    an_array[i] = 0;
  }
}
