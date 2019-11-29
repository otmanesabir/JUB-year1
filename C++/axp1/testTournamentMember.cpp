/*
 CH08-320142
 a5 p4.cpp
 Dushan Terzikj
 d.terzikj@jacobs-university.de
 */
#include <iostream>
#include "TournamentMember.h"

int main() {
    
    Player *players[50];
    int num_players;
    std::cin >> num_players;
    for(int i = 0; i < num_players; i++){
        
        int number, position, goals;
        bool foot;
        std::cout << "Enter data in this format -> (number, position, golas, foot)\n";
        std::cin >> number >> position >> goals >> foot;
        players[i] = new Player(num_players, position, goals, foot);
    }
    
    Referee ref;
    
    // testing loop, read the std::cout statements for clarification
    while(true){
        
        std::cout << "Type the index of the player or -1 to quit\n";
        int idx; // index of the player
        std::cin >> idx;
        if(idx == -1){
            break;
        } else if(idx >= num_players){
            std::cout << "The number of players is lower than the index, "
            << "please try again\n";
        } else {
            
            std::cout << "Type 'r' for red card and 'y' for yellow card\n";
            char op; // the card type
            std::cin >> op;
            if(op == 'r'){
                ref.addToRedCardList(players[idx]);
            } else {
                ref.addToYellowCardList(players[idx]);
            }
        }
    }
    
    for(int i = 0; i < num_players; i++){
        delete players[i];
    }
    
    return 0;
}
