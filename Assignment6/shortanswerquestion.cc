// Copyright 2022 CSCE240
#include<question.h>
#include<shortanswerquestion.h>
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

namespace csce240_program6 {

  ShortAnswerQuestion::ShortAnswerQuestion(string q, string answer) 
                                : Question(q)
  {
    answer_ = answer;
  }

  ShortAnswerQuestion::Print(bool include_correct_answer)
  {
    cout << "Quesetion: " << GetQuestion() 
        << "\nCorrect Answer: " << include_correct_answer << endl;
  }

  ShortAnswerQuestion::SetAnswer()
  {
    answer_ = ans;
  }

}  // namespace csce240_program6
