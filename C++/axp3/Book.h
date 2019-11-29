//
//  Book.h
//  p3
//
//  Created by Otmane Sabir on 12/11/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>

using namespace std;

#ifndef Book_h
#define Book_h

class Book {
private:
    const char *title;
    int pages;
public:
    Book(const Book&);
    Book(const char *t, int p);
    Book();
    void print();
};

#endif /* Book_h */
