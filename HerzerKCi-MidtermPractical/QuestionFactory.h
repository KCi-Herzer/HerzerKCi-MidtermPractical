#pragma once
#include "Question.h"

class QuestionFactory
{
public:
	QuestionFactory();
	~QuestionFactory();
	void GenerateEasyQuestions();

	Question** questions = nullptr;


private:
/// <Refrences>
/// 
/// Question Refrences
/// Asikaburu, C. (2020, July 11). 15 Software Engineering Riddles to Quiz Your Friends and Co-workers. Dev Genius.
/// https://blog.devgenius.io/15-software-engineering-riddles-to-quiz-your-friends-and-co-workers-8227c94f05af
/// 
/// </Refrences>
/// <param name="quest"></param>
	std::vector <std::string> easyQuestions =
	{
		"The more you code, the more of me there is. I may be gone for now but you can稚 get rid of me forever. What am I?",
		"I知 a language for everything yet I have no real identity of my own. Good luck trying to compile me. What am I?",
		"As a developer I知 your eyes, showing you the result of your code in your language of choice. What am I?",
		"I知 fundamental and used to build larger structures. While you値l find many different kinds of me, we all just mess with information in different ways. What am I?"
	};
	std::vector <std::vector<std::string>> easyAnswerPossiblilitys =
	{
		{"1) A Compiler", "2) Data Structers", "3) A bug", "4) Company Funding"},
		{"1) Javascript", "2) TikTok's Algorythm", "3) A .txt file", "4) Pseudocode"},
		{"1) Siri", "2) A print statement", "3) Visual Studio", "4) The Windows task manager"},
		{"1) Cementing Paste", "2) A Lego brick", "3) A data structure", "4) Math"}
	};
	std::vector <int> easyAnswers = { 2, 3, 1, 2 };
};

