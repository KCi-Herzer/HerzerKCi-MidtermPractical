#include <iostream>
#include "QuestionFactory.h"

int main()
{
    QuestionFactory factory;
    std::cout << "Hello GitHub!\nWelcome to my Midterm Practical";
    int choice = 0;
    while (true)
    {
        std::cout << "\n\n1) Easy\n\nPick a Difficulty: ";
        std::cin >> choice;
        if (choice != 1)
        {
            std::cout << "Not an option..." << '\n';
        }
        else
        {
            //std::cout << "Good choice" << '\n';
            break;
        }
    }
    
    
}