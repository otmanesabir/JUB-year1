//
// Created by dushan on 23.10.17.
//

#ifndef P5_2_TOURNAMENTMEMBER_H
#define P5_2_TOURNAMENTMEMBER_H


class TournamentMember {
    
private:
    
    static std::string location;
    
    char *firstName;
    char *lastName;
    char *dateOfBirth;
    std::string country;
    std::string city;
    
public:
    
    // constructors
    TournamentMember();
    TournamentMember(char*, char*, char*, const std::string&, const std::string&);
    TournamentMember(const TournamentMember&);
    
    // destructors
    ~TournamentMember();
    
    // setters
    inline void setFirstName(char *firstName){
        
        char *ch = firstName;
        for(int i = 0; *ch != '\0'; i++, ch++){
            this->firstName[i] = *ch;
        }
    }
    
    inline void setLastName(char *lastName){
        
        char *ch = lastName;
        for(int i = 0; *ch != '\0'; i++, ch++){
            this->lastName[i] = *ch;
        }
    }
    
    inline void setDateOfBirth(char *dateOfBirth){
        
        char *ch = dateOfBirth;
        for(int i = 0; *ch != '\0'; i++, ch++){
            this->dateOfBirth[i] = *ch;
        }
    }
    
    inline void setCountry(const std::string &country){
        this->country = country;
    }
    
    inline void setCity(const std::string &city){
        this->city = city;
    }
    
    // getters
    inline char* getFirstName() const{
        return firstName;
    }
    
    inline char* getLastName() const{
        return lastName;
    }
    
    inline char* getDateOfBirth() const{
        return dateOfBirth;
    }
    
    inline std::string getCountry() const{
        return this->country;
    }
    
    inline std::string getCity() const{
        return this->city;
    }
    
    // service methods
    void print() const;
    
    static void changeLocation(const std::string&);
    
};

class Player : public TournamentMember{
    
private:
    
    int number;
    int position;
    int goals;
    bool isLeftFooted; // it is true if the person is left-footed
    
public:
    
    // constructors
    
    Player();
    Player(const int&, const int&, const int&, const bool&);
    Player(const int& number, const int& position, const int& goals,
           const bool& foot, char *firstName, char *lastName, char *dateOfBirth,
           std::string country, std::string city);
    Player(const Player&);
    
    // destructors
    ~Player();
    
    // setters
    
    inline void setNumber(const int &number){
        this->number = number;
    }
    
    inline void setPosition(const int &position){
        this->position = position;
    }
    
    inline void setFoot(const bool &foot){
        this->isLeftFooted = foot;
    }
    
    // getters
    
    inline int getNumber() const{
        return this->number;
    }
    
    inline int getPosition() const{
        return this->position;
    }
    
    inline int getGoals() const{
        return this->goals;
    }
    
    inline int getFoot() const{
        return this->isLeftFooted;
    }
    
    // service methods
    
    void print() const;
    
    void incGoals();
};

class Referee : public TournamentMember{
    
private:
    
    int yellowCardCount;
    Player *yellowCardList[50];
    int redCardCount;
    Player *redCardList[50];
    
public:
    
    // constructors
    Referee();
    
    // destructors
    ~Referee();
    
    // service methods
    
    bool addToYellowCardList(Player *p);
    bool addToRedCardList(Player *p);
};

#endif //P5_2_TOURNAMENTMEMBER_H
