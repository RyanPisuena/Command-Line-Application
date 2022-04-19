//
//  loginandregistration.cpp
//  Command Line Application
//
//  Created by Ryan Pisuena on 4/19/22.
// Dont use in real life applications, passwords are stored in plaintext

#include <iostream>
#include <fstream> //filestream
#include <cstring>

#include "loginandregistration.hpp"

using namespace std;

bool loginandregistration::isLoggedIn()
{
    string username, password, un, pw; // last two are for comparison
    
    cout << "Please enter your username: " << endl;
    cin >> username;
    
    cout << "Please enter your password: " << endl;
    cin >> password;
    
    ifstream read(username + ".txt");
    getline(read, un); // for reading the username from file
    getline(read, pw); // for reding the password from file
    
    // comparing the user input with text "database"
    cout << username << endl;
    cout << un << endl;
    
    cout << password << endl;
    cout << pw << endl;
    if(username == un && password == pw)
    {
        //cout << "Successfully logged in" << endl;
        return true;
    }
    else
    {
        //cout << "User and/or password is wrong";
        return false;
    }
}

// rewrite to check if username already exists
void loginandregistration::registerUser()
{
    string username;
    string password;
    
    cout << "select a username" << endl;
    cin >> username;
    
    cout << "select a password" << endl;
    cin >> password;
    
    ofstream of;
    of.open(username + ".txt");
    
    // writing data to f1ile
    of << username << endl;
    of << password << endl;
    
    of.close();
    
    cout << "User registered" << endl;
    //main();
 }

void loginandregistration::userPrompt()
{
    int userChoice = -1;
    
    cout << "Hit 1 to register" << endl;
    cout << "Hit 2 to login" << endl;
    cin >> userChoice;
    
    if(userChoice == 1)
    {
        loginandregistration::registerUser();
    }
    else
    {
        loginandregistration::logIn();
    }

}

int loginandregistration::logIn()
{
    bool isLoggedIn = loginandregistration::isLoggedIn();
    
    if(!isLoggedIn)
    {
        //system("PAUSE");
        cout << "User and/or password is wrong" << endl;
        return 0;
    }
    else
    {
        cout << "Successfully logged in" << endl;
        //system("PAUSE");
        return 1;
    }
}
