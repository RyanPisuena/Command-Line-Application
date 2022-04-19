//
//  loginandregistration.hpp
//  Command Line Application
//
//  Created by Ryan Pisuena on 4/19/22.
//

#ifndef loginandregistration_hpp
#define loginandregistration_hpp

#include <stdio.h>
//#include "userdatabase.hpp"
#include "userProfile.hpp"

class loginandregistration
{
public:
    bool isLoggedIn();
    //bool isLoggedIn(userDatabase& database);
    
    void userPrompt();
    //void userPrompt(userDatabase& database);
    
    void registerUser();
    //void registerUser(userDatabase& database);

    int logIn();
    //int logIn(userDatabase& database);

};

#endif /* loginandregistration_hpp */
