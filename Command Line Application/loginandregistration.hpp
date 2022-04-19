//
//  loginandregistration.hpp
//  Command Line Application
//
//  Created by Ryan Pisuena on 4/19/22.
//

#ifndef loginandregistration_hpp
#define loginandregistration_hpp

#include <stdio.h>
#include "userdatabase.hpp"

class loginandregistration
{
public:
    bool isLoggedIn();
    void userPrompt();
    void registerUser();
    int logIn();
};

#endif /* loginandregistration_hpp */
