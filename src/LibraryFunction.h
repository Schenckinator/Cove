#ifndef LIBRARYFUNCTION_H
#define LIBRARYFUNCTION_H

#include <string>
#include <iostream>
#include <vector>
#include "Media.h"
#include "Library.h"
using namespace std;

class LibraryFunction{
public:
    void createLibrary(string name, vector<Media> listOfMedia){
        Library newLibrary(name, listOfMedia);
    }

    Media searchLibrary(Media media, Library library){
        vector<Media> list = library.getMediaList();
        for(const Media& m : list){
            if(m == media){
                return media;
            }
        }

        return null;
    }

    void displayLibrary(Library library){
        vector<Media> list = library.getMediaList();
        for(const Media& m : list){
            //print media here
        }
    }

    void addToLibrary(Library library, Media media){
        vector<Media> list = library.getMediaList();
        list.push_back(media);
    }

    void deleteFromLibrary(Library library, Media media){
        vector<Media> list = library.getMediaList();
        list.erase(media);
    }
};

#endif