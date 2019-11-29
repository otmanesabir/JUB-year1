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
    string location = "Hamburg";
    string str = "LEFT-WING";
    Player p(6, 133, 'L', "LEFT-WING", "Otmane", "Sabir", "2001-01-05", "Marrakech", 55.7, 174);
    Player p1(10, 343, 'R', "Right-Wing", "Bilal", "Abdenouri", "2001-01-01", "Marrakech", 65, 178);
    Player p2(69, 333, 'R', "Center-Back", "Ligma", "Balz", "2018-03-28", "Nuts", 0.31, 200);
    p.print();
    p1.print();
    p2.print();
    p2.increment_goals(69);
    Player::locationChange(location);
    p.print();
    p1.print();
    p2.print();
}
