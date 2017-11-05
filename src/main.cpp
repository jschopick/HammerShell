#include <iostream>
#include <algorithm>
#include "Base.h"
#include "Command.h"

#include <boost/algorithm/string.hpp>
    using namespace std;
    using namespace boost;

int main() {

    std::string str1 = "";
    std::cout << "$ ";
    std::getline(std::cin,str1);

    Command* cmd = new Command(str1);
    cmd->setComVector(str1);
    cout << "\nCommands:" << endl;
    cmd->display();

//    Connector* cntr = new Connector(str1);
//    cntr->setComVector(str1);
//    cout << "\nConnectors:" << endl;
//    cntr->display();


    return 0;
}
