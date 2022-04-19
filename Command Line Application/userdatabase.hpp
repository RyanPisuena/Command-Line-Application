//
//  userdatabase.hpp
//  Command Line Application
//
//  Created by Ryan Pisuena on 4/19/22.
//

#ifndef userdatabase_hpp
#define userdatabase_hpp

#include <stdio.h>
#include <iostream>
#include <unordered_map>

using namespace std;
//class userProfile;
class userDatabase
{
public:
    unordered_map<string, string> userdb;
    userDatabase();
};

#endif /* userdatabase_hpp */
