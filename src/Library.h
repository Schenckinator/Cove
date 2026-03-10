#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <iostream>
#include <vector>
#include "Media.h"
using namespace std;

class Library{
private:
    string name;
    vector<Media> listOfMedia;

public:
    string getName(){
        return name;
    }

    vector<Media> getMediaList(){
        return listOfMedia;
    }
};
#endif