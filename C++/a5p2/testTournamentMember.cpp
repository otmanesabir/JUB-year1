 //
//  testTournamentMember.cpp
//  a5p2
//
//  Created by Otmane Sabir on 11/9/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <stdio.h>
#include "TournamentMember.h"

int main(){
    char const firstName[36] = "Otmane";
    char const lastName[38] = "Sabir";
    char const date[17] = "2001-01-05";
    string location = "Marrakech";
    string location2 = "Bremen";
    double weight = 65.4;
    double height = 6.3;
    // creating default instance
    TournamentMember m_default;
    // prints default instance
    m_default.print();
    // creating second instance
    TournamentMember m(firstName, lastName, date, location, weight, height);
    // prints the data
    m.print();
    // changes location
    m.locationChange(location2);
   // prints the data with new location
    m.print();
}
