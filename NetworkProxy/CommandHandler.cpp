#include "CommandHandler.h"

#include <iostream>

void CommandHandler::processUserInput(const std::string& userInput)
{
    
    
}

int CommandHandler::parsePortFromCommand(const std::string& userInput, const std::string& command)
{
    const size_t commandPos = userInput.find(command);
    const size_t portPos = commandPos + command.length() + 1;

    if (portPos < userInput.length()) {
        const std::string portStr = userInput.substr(portPos);

        try {
            const int port = std::stoi(portStr);
            if (port <= 0 || port > 65535) {
                std::cout << "Invalid port number. Port must be between 1 and 65535." << std::endl;
                return -1; 
            }
            return port;
        } catch (std::invalid_argument&) {
            std::cout << "Invalid port number. Please enter a valid numeric value for the port." << std::endl;
            return -1;
        } catch (std::out_of_range&) {
            std::cout << "Invalid port number. The entered value is out of range." << std::endl;
            return -1;
        }
    }
    std::cout << "Port number is missing in the command. Please specify a port number." << std::endl;
    return -1;
}

