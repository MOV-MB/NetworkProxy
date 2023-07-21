#pragma once
#include <string>

class CommandHandler
{
public:
    CommandHandler();

    void processUserInput(const std::string& userInput);
private:
    int parsePortFromCommand(const std::string& userInput, const std::string& command);
    
};


