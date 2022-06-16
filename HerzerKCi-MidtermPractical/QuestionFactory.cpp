#include "QuestionFactory.h"

QuestionFactory::QuestionFactory()
{
	questions = new Question * [4];
}

QuestionFactory::~QuestionFactory()
{
	//delete[] questions;
	//For some reason these pointers already get deleted.
	//I think it's because the Factory is a local variable in main?
	//Not to sure though.
}

void QuestionFactory::GenerateEasyQuestions()
{
	for (unsigned int i = 0; i < easyQuestions.size(); i++)
	{
		questions[i] = new Question(easyQuestions[i], easyAnswerPossiblilitys[i], easyAnswers[i]);
		
	}
}

