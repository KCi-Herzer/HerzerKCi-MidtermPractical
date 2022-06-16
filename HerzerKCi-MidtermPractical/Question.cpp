#include "Question.h"

Question::Question(std::string _question, std::vector<std::string> _answers, int _correctAnswer)
{
	question = _question;
	answers = _answers;
	correctAnswer = _correctAnswer;
}

std::string Question::GetQuestion()
{
	return question;
}

std::vector<std::string> Question::GetPossibleAnswers()
{
	return answers;
}

int Question::GetAnswer()
{
	return correctAnswer;
}
