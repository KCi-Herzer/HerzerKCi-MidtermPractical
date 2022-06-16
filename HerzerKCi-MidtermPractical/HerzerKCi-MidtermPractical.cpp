#include <iostream>
#include "QuestionFactory.h"

void AskQuestion();

int main()
{
#pragma region Initializations
    QuestionFactory factory;
    int choice = 0;
    srand((unsigned int)time(NULL));
#pragma endregion

#pragma region Intro & MainLoop
    std::cout << "Hello GitHub!\nWelcome to my Midterm Practical\n";

    while (true)
    {
        choice = 0;
        std::cout << "\n1) Easy\n2) Exit\nPick a Difficulty: ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            factory.GenerateEasyQuestions();
            AskQuestion(factory);
            break;
        case 2:
            break;
        default:
            std::cout << "Not an option..." << '\n';
            break;
        }
        if (choice == 2)
        {
            break;
        }
    }

    
#pragma endregion
    
}

void AskQuestion(QuestionFactory _factory)
{
    int option;
    option = rand() % 4;
    _factory.questions[option]->PrintQuestion();
}