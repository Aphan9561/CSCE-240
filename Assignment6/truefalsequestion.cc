// Copyright 2022 CSCE240
#include<question.h>
#include<truefalsequestion.h>
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

namespace csce240_program6 {

  TrueFalseQuestion::TrueFalseQuestion(string question, bool answer) 
                                      : Question(question)
  {
    answer_ = answer;
  }

  void TrueFalseQuestion::Print(bool include_correct_answer) const 
  {
    cout << "Question: " << GetQuestion() 
        << "\n Correct Answer: " << include_correct_answer << endl;
  }
  void TrueFalseQuestion::SetAnswer(bool ans)
  {
    answer_ = ans;
  }

}  // namespace csce240_program6
