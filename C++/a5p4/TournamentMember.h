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
protected: // data members
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

class Player : public TournamentMember {
private:
    int number;
    string position;
    char foot;
    int goals_num;
public:
    // constructors
    Player();
    Player(int, int, char, string, const char*, const char*, const char*, string, double, double);
    Player(Player&);
    ~Player();
    // setters
    void setNumber(int newnumber);
    void setGoals(int newgoals_num);
    void setFoot(char newfoot);
    void setPosition(string &newposition);
    // getters
    int getNumber();
    int getGoals();
    char getFoot();
    string getPosition();
    // service methods
    void print();
    void increment_goals(int newnumber);
};

class Referee : public TournamentMember{
    
private:
    
    int yellowCardCount;
    Player *yellowCardList[50];
    int redCardCount;
    Player *redCardList[50];
    
public:
    
    // constructors & destructor
    Referee();
    Referee(int, Player*, int, Player*);
    ~Referee();
    
    // service methods
    
    bool addToYellowCardList(Player *p);
    bool addToRedCardList(Player *p);
};

#endif /* TournamentMember_h */
