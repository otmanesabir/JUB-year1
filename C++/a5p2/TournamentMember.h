//
//  TournamentMember.h
//  a5p2
//
//  Created by Otmane Sabir on 11/9/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>

using namespace std;

#ifndef TournamentMember_h
#define TournamentMember_h

class TournamentMember{
private: // data members
    const char *firstName; // arrays of characters
    const char *lastName;
    const char *date;
    static string location; // string
    double height; // doubles for height and weight
    double weight;
public:
    // constructors
    TournamentMember();
    TournamentMember(const char*, const char*, const char*, string&, double&, double&);
   // copy constructor
    TournamentMember(TournamentMember&);
    // destructor
    ~TournamentMember();
    // setters
    inline void setfirstName(const char *newfirstName);
    inline void setlastName(const char *newlastName);
    inline void setdate(const char *newdate);
     inline void setlocation(string &newlocation);
    inline void setHeight(double &newheight);
    inline void setWeight(double &newweight);
    // getters
    inline const char* getfirstName();
    inline const char* getlastName();
    inline const char* getdate();
    inline string getlocation();
    inline double getHeight();
    inline double getWeight();
    // service methods
    void print();
    static void locationChange(string &);
};

#endif /* TournamentMember_h */
