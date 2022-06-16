#include "QuestionFactory.h"

QuestionFactory::QuestionFactory()
{
	questions = new Question * [4];
}

QuestionFactory::~QuestionFactory()
{

}

void QuestionFactory::GenerateEasyQuestions()
{
	for (unsigned int i = 0; i < easyQuestions.size(); i++)
	{
		questions[i] = new Question(easyQuestions[i], easyAnswerPossiblilitys[i], easyAnswers[i]);
		
	}
}



