#include <iostream>
#include "CommandHandler.h"

int main()
{
    CommandHandler commandHandler;

    std::string userInput;
    while (true)
    {
        std::cout << "Enter a command ('exit' to quit): ";
        std::getline(std::cin, userInput);

        if(userInput == "exit")
        {
            break;
        }
        commandHandler.processUserInput(userInput);
    }
}