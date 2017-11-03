#include "Connector.h"
#include <vector>
#include <iostream>

// class Command : public Base {
//  protected:
//     std::vector<char*> commands;
//  public:

// Constructor: takes a vector of char* and loads the connectors vector.
Connector::Connector(std::vector<char*> input) {
    connectors = input;
}

// Takes in a char* and puts it into the vector of connectors.

void Connector::setConVector(char* input) {
    connectors.push_back(input);
}

void Connector::display() {
    for(int i = 0; i < connectors.size(); ++i) {
        std::cout << connectors.at(i) << std::endl;
    }
}
