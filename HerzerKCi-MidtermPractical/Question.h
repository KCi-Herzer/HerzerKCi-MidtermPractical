#pragma once
#include <string>
#include <vector>

class Question
{
public:
	Question(std::string _question, std::vector <std::string> _answers, int _correctAnswer);
	
	int GetAnswer();
	void PrintQuestion();

private:
	std::string question;
	std::vector <std::string> answers;
	int correctAnswer;

};

