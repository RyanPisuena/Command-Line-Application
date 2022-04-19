//
//  main.cpp
//  Command Line Application
//
//  Created by Ryan Pisuena on 4/19/22.
//

#include "loginandregistration.hpp"
//#include "userdatabase.hpp"
#include "userProfile.hpp"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
   
    loginandregistration commandline;
    //userDatabase db;
    commandline.userPrompt();
    
    return 0;
}
