#pragma once
#include <string>
#include <vector>

class Question
{
public:
	Question(std::string _question, std::vector <std::string> _answers, int _correctAnswer);
	
	std::string GetQuestion();
	std::vector <std::string> GetPossibleAnswers();
	int GetAnswer();

private:
	std::string question;
	std::vector <std::string> answers;
	int correctAnswer;

};

