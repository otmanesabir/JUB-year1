//
//  testworker.cpp
//  Worker
//
//  Created by Otmane Sabir on 12/11/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <stdio.h>
#include "Worker.h"

using namespace std;

worker::worker(){
    this->name = "Default_Name";
    this->hours = 0;
}
worker::worker(int newhours, string &newname){
    this->hours = newhours;
    this->name = newname;
}
worker::worker(worker &cpy){
    this->name = cpy.name;
    this->hours = cpy.hours;
}
worker::~worker(){
    cout << "Using destructor" << endl;
}

void worker::setName(string &newname){
    this->name = newname;
}
void worker::setHours(int &newhours){
    this->hours = newhours;
}

int worker::getHours(){
    return this->hours;
}
string worker::getName(){
    return this->name;
}

ostream& operator<<(ostream& out,const worker &w){
    cout << "Name : " << w.name << endl;
    cout << "Hours : " << w.hours << endl;
    return out;
}
istream& operator>>(istream &in, worker &w){
    cin >> w.hours;
    cin >> w.name;
    return in;
}
