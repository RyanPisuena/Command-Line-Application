//
//  userProfile.hpp
//  Command Line Application
//
//  Created by Ryan Pisuena on 4/19/22.
//

#ifndef userProfile_hpp
#define userProfile_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class userProfile
{
    public:
    string username;
    
    userProfile(string user, string pass);
    void depositMoney(double funds);
    void subtractMoney(double funds);
    void getBalance();
    
    private:
    double money = 0;
    string password;

};

#endif /* userProfile_hpp */
