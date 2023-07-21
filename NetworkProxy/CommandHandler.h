#pragma once
#include <string>

class CommandHandler
{
public:
    CommandHandler();

    static void processUserInput(const std::string& userInput);
private:
    static int parsePortFromCommand(const std::string& userInput, const std::string& command);
    
};


