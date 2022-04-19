//
//  userProfile.cpp
//  Command Line Application
//
//  Created by Ryan Pisuena on 4/19/22.
//

#include "userProfile.hpp"

userProfile::userProfile(string user, string pass)
{
    this->username = user;
    this->password = pass;
}

void userProfile::depositMoney(double funds)
{
    cout << "depositing: $" << funds << endl;
}

void userProfile::subtractMoney(double funds)
{
    int withdrawal = funds;
    if(withdrawal > this->money)
    {
        cout << "Insufficient funds" << endl;
    }
    else
    {
        cout << "withdrawing: $" << withdrawal << endl;
    }
}

void userProfile::getBalance()
{
    cout << "Your balance is: $" << this->money << endl;
}

