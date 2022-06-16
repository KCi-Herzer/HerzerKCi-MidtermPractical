#pragma once
#include "Question.h"

class QuestionFactory
{
public:
	QuestionFactory(); //Currently capable of handling 4 questions
	~QuestionFactory();
	void GenerateQuestion(int quest);

	Question** questions;

	int numOfQuestions;

};

