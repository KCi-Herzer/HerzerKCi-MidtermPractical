#include "QuestionFactory.h"

QuestionFactory::QuestionFactory()
{
	for (int i = 0; i < 4; i++)
	{
		GenerateQuestion(i);
	}
}

QuestionFactory::~QuestionFactory()
{
	delete[] questions;
}



void QuestionFactory::GenerateQuestion(int quest)
{
	switch (quest)
	{
	case 0: 
	{
		//Create new question
	}
	case 1:
	{
		//Create new question
	}
	case 2:
	{
		//Create new question
	}
	case 3:
	{
		//Create new question
	}
	default:
		break;
	}
}
