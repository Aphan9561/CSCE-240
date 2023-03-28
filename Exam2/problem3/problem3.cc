// Copyright 2022 CSCE240
// Exam 2 - problem 3 - function prototypes
#include<bookproblem3.h>
#include<problem3.h>
#include<string>
using std::string;
int WhichChapter(const Book * bptr, string ch) {
  // chap is -1 becasue is the chapter does not exist it returns -1
  int chap = -1;
  Book b(*bptr);
  for (int i = 0; i < b.GetNumChapters(); i++) {
    // checks if the chapter exist
    if (b.GetChapters()[i] == ch) {
      // makes chap equal to the chapter number so it can be returned
      chap = i+1;
    }
  }
  return chap;
}
void RemoveChapter(Book * bptr, string ch) {
  int index = WhichChapter(bptr, ch);
  Book b(*bptr);
  // sees if the chapter exist so it can be removed
  if (index != -1) {
    int num_chap = 0;
    int new_size = b.GetNumChapters() -1;
    string book[new_size];  // puts the chapters into a new book
    for (int i = 0; i < b.GetNumChapters(); i++) {
      if (i != index - 1) {
        book[num_chap] = *(b.GetChapters() + i);
        num_chap++;  // counts the number of chapters the new book has
      }
    }
    bptr->SetChapters(book, num_chap);
  }
}
