//
//  Book.cpp
//  p3
//
//  Created by Otmane Sabir on 12/11/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <stdio.h>
#include "Book.h"

Book::Book(){
    this->title = "Default_Book";
    this->pages = 0;
}

Book::Book(const char *t, int p){
    this->title = t;
    this->pages = p;
}

Book::Book(const Book &cpy){
    this->title = cpy.title;
    this->pages = cpy.pages;
}

void Book::print(){
    cout << title << endl;
    cout << pages << endl;
}
