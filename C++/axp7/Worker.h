//
//  Worker.h
//  Worker
//
//  Created by Otmane Sabir on 12/11/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>

using namespace std;

#ifndef Worker_h
#define Worker_h

class worker{
private:
    int hours;
    string name;
public:
    // constructors and destructor
    worker();
    worker(int, string&);
    worker(worker&);
    ~worker();
    // Setters
    void setName(string &newname);
    void setHours(int &newhours);
    // Getters
    string getName();
    int getHours();
    // Operators
    friend ostream& operator<<(ostream& out, const worker&);
    friend istream& operator>>(istream& in, worker&);
};

#endif /* Worker_h */
