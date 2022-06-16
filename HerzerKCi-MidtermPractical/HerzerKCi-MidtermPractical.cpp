#include <iostream>
#include "QuestionFactory.h"

void AskQuestion(QuestionFactory _factory);
int ReadIntiger();
void ClearInputBuffer();


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
        choice = ReadIntiger();
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
    int answer = 0;
    option = rand() % 4;
    while (true)
    {
        _factory.questions[option]->PrintQuestion();
        answer = ReadIntiger();
        if (answer != 1 && answer != 2 && answer != 3 && answer != 4)
        {
            std::cout << '\n' << "I should mark you wrong for that, try again." << '\n';
        }
        else
        {
            break;
        }
    }
    
    if (answer != _factory.questions[option]->GetAnswer())
    {
        std::cout << "Wrong! Better luck next time." << '\n';
    }
    else
    {
        std::cout << "Correct!!!" << '\n';
    }
}

#pragma region Other Functions
int ReadIntiger()
{
    int number = 0;
    while (true)
    {
        if (std::cin >> number)
        {
            break;
        }
        ClearInputBuffer();
        std::cout << "\nInvalid number.\n";
    }
    return number;
}

void ClearInputBuffer()
{
    std::cin.clear(); //clears errors in buffer
    std::cin.ignore(INT_MAX, '\n'); //flushes buffer, if this is done with nothing in the buffer, it will wait for somthing to pass the line
}
#pragma endregion


