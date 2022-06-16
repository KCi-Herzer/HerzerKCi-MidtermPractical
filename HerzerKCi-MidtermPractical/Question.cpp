#include "Question.h"
#include <iostream>

Question::Question(std::string _question, std::vector<std::string> _answers, int _correctAnswer)
{
	question = _question;
	answers = _answers;
	correctAnswer = _correctAnswer;
}

int Question::GetAnswer()
{
	return correctAnswer;
}

void Question::PrintQuestion()
{
	std::cout << '\n' << question << '\n';
	for (int i = 0; i < answers.size(); i++)
	{
		std::cout << answers[i] << '\n';
	}
	std::cout << "Choose your answer: ";
}
