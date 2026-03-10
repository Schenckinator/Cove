#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>
using namespace std;

class User{
private:
    string username;
    string email;
    string password;

public:
    User(string pUsername, string pEmail, string pPassword){
        username = pUsername;
        email = pEmail;
        password = pPassword;
    }
};



#endif