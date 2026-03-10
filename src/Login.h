#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include <iostream>
#include "User.h"
using namespace std;

class Login{
public:
    Login(){

    }

    void verifyCredentials(string username, string password){
        // somehow check if username and password are in a database??
        // not sure how to connect c++ to a database

        /*if creds work
            mainmenu()
          else
            fail()
        */
            
    }

    void createAccount(string username, string password, string email){
        User newUser(username, password, email);
    }
};

#endif