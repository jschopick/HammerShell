#ifndef COMMAND_H
#define COMMAND_H

#include "Base.h"
#include <string>
#include <vector>

using namespace std;

class Command : public Base {
 protected:
    std::vector<std::string> commands;
    std::string input;
 public:
    Command() {}
    Command(std::string);
    void setComVector(std::string);
    virtual bool execute(std::vector<char*>);
    void display();
};

#endif
