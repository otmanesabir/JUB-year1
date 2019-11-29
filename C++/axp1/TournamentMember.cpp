#include <iostream>
#include "TournamentMember.h"

// constructors

TournamentMember::TournamentMember() {
    std::cout << "Default constructor called called from TournamentMember class\n";
    this->dateOfBirth = new char[11];
    this->firstName = new char[31];
    this->lastName = new char[31];
}

TournamentMember::TournamentMember(char *firstName, char *lastName,
                                   char *dateOfBirth, const std::string &country,
                                   const std::string &city) {
    
    std::cout << "Parametric constructor called called from TournamentMember class\n";
    this->dateOfBirth = new char[11];
    this->firstName = new char[31];
    this->lastName = new char[31];
    
    char *ch = firstName;
    for(int i = 0; *ch != '\0'; i++, ch++){
        this->firstName[i] = *ch;
    }
    
    ch = lastName;
    for(int i = 0; *ch != '\0'; i++, ch++){
        this->lastName[i] = *ch;
    }
    
    ch = dateOfBirth;
    for(int i = 0; *ch != '\0'; i++, ch++){
        this->dateOfBirth[i] = *ch;
    }
    
    this->country = country;
    this->city = city;
}

TournamentMember::TournamentMember(const TournamentMember &tm) {
    
    std::cout << "Copy constructor called called from TournamentMember class\n";
    this->dateOfBirth = new char[11];
    this->firstName = new char[31];
    this->lastName = new char[31];
    
    char *ch = tm.firstName;
    for(int i = 0; *ch != '\0'; i++, ch++){
        this->firstName[i] = *ch;
    }
    
    ch = tm.lastName;
    for(int i = 0; *ch != '\0'; i++, ch++){
        this->lastName[i] = *ch;
    }
    
    ch = tm.dateOfBirth;
    for(int i = 0; *ch != '\0'; i++, ch++){
        this->dateOfBirth[i] = *ch;
    }
    
    this->country = tm.country;
    this->city = tm.city;
}

// destructor

TournamentMember::~TournamentMember() {
    std::cout << "Destructor is called from TournamentMember class\n";
    delete [] this->dateOfBirth;
    delete [] this->firstName;
    delete [] this->lastName;
}

// service methods

void TournamentMember::print() const{
    
    std::cout << "First Name: ";
    char *ch = this->firstName;
    for(; *ch != '\0'; ch++){
        std::cout << *ch;
    }
    std::cout << std::endl;
    
    std::cout << "Last Name: ";
    ch = this->lastName;
    for(; *ch != '\0'; ch++){
        std::cout << *ch;
    }
    std::cout << std::endl;
    
    std::cout << "Date of Birth: ";
    ch = this->dateOfBirth;
    for(; *ch != '\0'; ch++){
        std::cout << *ch;
    }
    
    std::cout << std::endl;
    
    std::cout << "The member is from " << this->country << ", " << this->city;
    
    std::cout << std::endl;
    
    std::cout << "The location of the tournament is in: " << location;
    
    std::cout << std::endl;
    
}

// static initializations
std::string TournamentMember::location = "Bremen";

void TournamentMember::changeLocation(const std::string &newLocation) {
    location = newLocation;
}


/*
 * class Player methods
 * */


/*
 * Constructors
 * */

Player::Player() : TournamentMember(){
    std::cout << "Default constructor is called from Player class\n";
}

Player::Player(const int &number, const int &position, const int &goals,
               const bool &foot, char *firstName, char *lastName,
               char *dateOfBirth, std::string country, std::string city) :
TournamentMember(firstName, lastName, dateOfBirth, country, city){
    Player(number, position, goals, foot);
}

Player::Player(const int &number, const int &position, const int &goals,
               const bool &foot) : TournamentMember(){
    
    std::cout << "Parametric constructor is called from Player class\n";
    
    this->number = number;
    this->position = position;
    this->goals = goals;
    this->isLeftFooted = foot;
}

Player::Player(const Player &p) : TournamentMember(p){
    
    std::cout << "Copy constructor is called from Player class\n";
    
    this->number = p.number;
    this->goals = p.goals;
    this->position = p.position;
    this->isLeftFooted = p.isLeftFooted;
}

/*
 * Destructors
 * */

Player::~Player() {
    std::cout << "Destructor is called from Player class\n";
}

/*
 * Service methods
 * */

void Player::print() const{
    
    std::cout << "First Name: ";
    char *ch = this->getFirstName();
    for(; *ch != '\0'; ch++){
        std::cout << *ch;
    }
    std::cout << std::endl;
    
    std::cout << "Last Name: ";
    ch = this->getLastName();
    for(; *ch != '\0'; ch++){
        std::cout << *ch;
    }
    std::cout << std::endl;
    
    std::cout << "Date of Birth: ";
    ch = this->getDateOfBirth();
    for(; *ch != '\0'; ch++){
        std::cout << *ch;
    }
    
    std::cout << std::endl;
    
    std::cout << "The member is from " << this->getCountry() << ", "
    << this->getCity();
    
    std::cout << std::endl;
    
    std::cout << "Number: " << this->number << std::endl;
    std::cout << "Position: " << this->position << std::endl;
    std::cout << "Goals: " << this->goals << std::endl;
    std::cout << "Is left-footed: " << (this->isLeftFooted ? "Yes" : "No")
    << std::endl;
}

void Player::incGoals() {
    this->goals++;
}

/*
 * Referee class
 * */

/*
 * Service methods
 * */

bool Referee::addToYellowCardList(Player *p) {
    
    if(p == NULL){
        return false;
    }
    
    for(int i = 0; i < this->yellowCardCount; i++){
        
        if(this->yellowCardList[i] == p){
            
            for(int j = i; j < this->yellowCardCount-1; j++){
                this->yellowCardList[j] = this->yellowCardList[j+1];
            }
            this->yellowCardCount--;
            addToRedCardList(p);
            std::cout << "The player has been given a red card\n";
            return false;
        }
    }
    
    this->yellowCardList[this->yellowCardCount++] = p;
    
    return true;
}

bool Referee::addToRedCardList(Player *p) {
    
    if(p == NULL){
        return false;
    }
    
    this->redCardList[this->redCardCount++] = p;
    
    return true;
}

Referee::Referee() : TournamentMember(){
    
    std::cout << "Referee has been created using the default constructor\n";
    this->yellowCardCount = this->redCardCount = 0;
    for(int i = 0; i < 50; i++){
        this->yellowCardList[i] = NULL;
        this->redCardList[i] = NULL;
    }
}

Referee::~Referee() {
    std::cout << "Referee has been deleted\n";
}
